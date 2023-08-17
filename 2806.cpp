class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int ans = 0;

        if(purchaseAmount >= 5 && purchaseAmount <= 9){
            return 90;
        }

        if(purchaseAmount < 5){
            return 100;
        }

        else if(purchaseAmount % 10 < 5){
            ans = purchaseAmount -  purchaseAmount % 10;
        }

        else{
            ans = purchaseAmount + 10 - purchaseAmount % 10;
        }

        return 100 - ans; 
    }
};