class Solution {
public:
    void profit(vector<int>& prices,int i,int& minPrice,int& maxProfit){
        if(i == prices.size()){
            return ;
        }

        if(prices[i] < minPrice) minPrice = prices[i];
        if(prices[i] - minPrice  > maxProfit) maxProfit = prices[i] - minPrice;
        profit(prices,i + 1,minPrice,maxProfit);
    }

    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX,maxProfit = INT_MIN;
        profit(prices,0,minPrice,maxProfit); 
        return maxProfit; 
    }
};