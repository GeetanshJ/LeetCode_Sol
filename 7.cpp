class Solution {
    public int reverse(int x) {

       if(x > 1463847412 ||  x <= Math.pow(-2,31) ||x == -1563847412 ){
           return 0;
        }

        if(x > 0){
            
            int rev = 0;

            while(x > 0){
                int rem = x % 10;
                rev = rev * 10 + rem;
                x /= 10;
            }

            return rev;
        }

        else{
            int rev = 0;
            x = Math.abs(x);
            while(x > 0){
                int rem = x % 10;
                rev = rev * 10 + rem;
                x /= 10;
            }

            return -rev;
        }
    }
}