class Solution {
public:
    bool isPossible(vector<int>& nums,int target,int i, vector<vector<int>>& dp){
        if(target == 0) return 1;
        if(i >= nums.size() || target < 0) return 0;
        if(dp[i][target] != -1) return dp[i][target];

        bool include = isPossible(nums,target - nums[i], i+1,dp);
        bool exclude = isPossible(nums,target,i+1,dp);

        return dp[i][target] = include || exclude;
    }

    bool canPartition(vector<int>& nums) {
        int target = accumulate(nums.begin(),nums.end(),0);
        if(target % 2 != 0) return false;

        target /= 2;
        vector<vector<int>>dp (nums.size(),vector<int>(target+1,-1)) ;
        return isPossible(nums,target,0,dp);   
    }
};