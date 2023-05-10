class Solution {
    public boolean checkPerfectNumber(int num) {
        int num1 = 0;
        
        for(int i  = 1 ; i<=num/2 ; i++){
            if(num % i == 0){
                num1 += i; 
            }
        }
      
        if(num1 == num){
            return true;
        }

        else{
            return false;
        }
    }
}