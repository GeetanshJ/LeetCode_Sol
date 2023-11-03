class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> bite;
        vector<int> inte;

        for(int i = 0;i < arr.size(); i++){
            bite.push_back(arr[i].countBits();
            inte.push_back(arr[i]);
        }




        for(int i = 0;i < bite.size() - 1; i++){
            for(int j = i + 1;j < bite.size(); j++){
                if(bite[i] > bite[j]){
                    int temp = bite[i];
                    bite[i] = bite[j];
                    bite[j] = temp;

                    int temp1 = inte[i];
                    inte[i] = inte[j];
                    inte[j] = temp1;
                }
            }
        }


        for(int i = 0;i < bite.size() - 1; i++){
            for(int j = i + 1;j < bite.size(); j++){
                if(bite[i] == bite[j]){
                    if(inte[i] > inte[j]){
                        int temp = inte[i];
                        inte[i] = inte[j];
                        inte[j] = temp;
                    }
                }
            }
        }



        return inte;
    }
};