class Solution {
    public int arrangeCoins(int n) {
        int ans = n;
        int count = 0;
        for(int i = 1;i <= n; i++){
            ans = ans - i;
            count++;
            if(ans <= i){
                return count;
            }
        }
        return 0;
    }
}