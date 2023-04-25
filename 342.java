class Solution {
    public boolean isPowerOfFour(int n) {
        boolean ans = false;

            for(int i = 0; i < 16; i++){
                if(Math.pow(4,i) == n || n == 1){
                    ans = true;
                }
            }
            
            return ans;

        }
}