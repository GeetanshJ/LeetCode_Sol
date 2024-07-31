class Solution {
public:
    int house(vector<int>& dp,vector<int>& nums,int n){
        if(n < 0) return 0;

        if(dp[n] != -1) return dp[n];

        int include = house(dp,nums,n - 2) + nums[n];
        int exclude = house(dp,nums,n - 1) + 0;

        return dp[n] = max(include,exclude);
    }

    int rob(vector<int>& nums) {
        int n = nums.size() - 1;
        vector<int>dp (n+1,-1);

        return house(dp,nums,n);
    }
};