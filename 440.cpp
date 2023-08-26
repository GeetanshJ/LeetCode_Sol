class Solution {
public:
    int findKthNumber(int n, int k) {
        if(n >= 10){
            for(int i = 10;i <= n; i++){
                if(k == 1){
                    return i;
                }
                
                k--;
            }  
        }
        
        return n;
    }
};