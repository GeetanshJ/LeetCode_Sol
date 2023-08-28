class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;

        for(int i = 0;i < arr2.size(); i++){
            for(int j = 0;j < arr1.size(); j++){
                if(arr2[i] == arr1[j] && arr1[j] != INT_MIN){
                    ans.push_back(arr1[j]);
                    arr1[j] = INT_MIN;
                }
            }   
        }

        sort(arr1.begin(),arr1.end());
        
        for(int j = 0;j < arr1.size(); j++){
            if(arr1[j] != INT_MIN){
                ans.push_back(arr1[j]);
                arr1[j] = INT_MIN;
            }
        } 
    

        return ans;
    }
};