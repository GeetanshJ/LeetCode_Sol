class Solution {
public:
    int minCoins(vector<int>&dp,vector<int>& coins,int amount,int n){
        if(amount < 0){
            return INT_MAX;
        }

        if(amount == 0) return 0;

        if(dp[amount] != -1) return dp[amount];
        
        int mini = INT_MAX;
        for(int i = 0;i < n; i++){
            int ans = minCoins(dp,coins,amount - coins[i],n);
            if(ans != INT_MAX){
                mini = min(mini,ans + 1);
            }
        }
        
        dp[amount]  = mini;
        return dp[amount];
        
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<int>dp (amount + 1 , -1);
        int res =  minCoins(dp,coins,amount,n);

        return res == INT_MAX ? -1 : res; 
    }
};