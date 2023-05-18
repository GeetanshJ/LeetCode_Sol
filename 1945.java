class Solution {
    public int getLucky(String s, int k) {
        
        int sum = 0,len = s.length(),sum_k = 0;

        
        for(int i = 0;i < len; i++){
            int x = (int) (s.charAt(i) - 96);
            if(x >= 10){
                int rem = x % 10;
                int rem_1 = x /10;
                sum += rem + rem_1;
            }

            else if(x <= 9){
                sum += x;
            }
        }        
        
                
        if(k >= 2){
            while(k > 1){
                while(sum > 0){
                    int rem = sum % 10;
                    sum_k += rem;
                    sum /= 10;
                }
                sum = sum_k;
                sum_k = 0;
                k--;
            }
        }

        return sum;
    }
}