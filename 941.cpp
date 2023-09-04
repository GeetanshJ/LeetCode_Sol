class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3){
            return false;
        }

        for(int i = 0;i < arr.size() - 1;i++){
            if(arr[i] == arr[i+1]){
                return false;
            }
        }

        int index = 0;

        for(int i = 1;i < arr.size() - 1;i++){
            if(arr[i] > arr[i+1] && arr[i] > arr[i-1]){
                index = i;
            }
        }

        for(int i = 0;i < index - 1;i++){
            if(arr[i] > arr[i+1]){
                return false;
            }
        }

        for(int i = index;i < arr.size() - 1;i++){
            if(arr[i] < arr[i+1]){
                return false;
            }
        }

        return index == 0 ? false : true;
    }
};