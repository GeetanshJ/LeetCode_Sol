class Solution {
public:

    
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int> ans;
        int cnt = 0;
        
        
        for(const vector<int> res:nums){
            for(int j = res[0];j <= res[1]; j++){
                ans.push_back(j);
            }
        }
        
        sort(ans.begin(),ans.end());
        
        for(int i = 0;i < ans.size() - 1; i++){
            if(ans[i] == ans[i+1]){
                ans[i] = INT_MAX;
            }
        }
        
        
        
        sort(ans.begin(),ans.end());

                
        for(int i = ans.size() - 1;i >= 0; i--){
            if(ans[i] == INT_MAX){
                ans.pop_back();
            }
        }
        
        return ans.size();
    }
};