class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        
        for(int i = 0;i < queries.size(); i++){
            int temp = 0;
            for(int j = queries[i][0]; j <= queries[i][1]; j++){
                temp ^= arr[j];
            }

            ans.push_back(temp);
        }

        return ans;
    }
};