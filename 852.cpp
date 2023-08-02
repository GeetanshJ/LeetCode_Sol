class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max = 0,res = 0;
        for(int i = 0;i < arr.size();i++){
            if(arr[i] >= max){
                max = arr[i];
                res = i;
            }
        }
        return res;
    }
};