class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        vector<int> res;


        int min = INT_MAX;
        for(int i = 0;i < arr.size() - 1; i++){
            if(arr[i+1] - arr[i] < min){
                min = arr[i+1] - arr[i];
            }
        }

        for(int i = 0;i < arr.size() - 1; i++){
            if(arr[i+1] - arr[i] == min){
                res.push_back(arr[i]);
                res.push_back(arr[i+1]);
                ans.push_back(res);
                res.clear();
            }
        }

        return ans;
    }
};