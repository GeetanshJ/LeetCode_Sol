class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i = 0;i < 32; i++){
            if(pow(4,i) == n){
                return true;
            }
        }

        return false;
    }
};