class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xorR = start ^ goal;
        int ans = 0;
        
        
        while (xorR > 0) {
            if(xorR % 2 == 1) ans++;
            xorR /= 2;
        }
        
        return ans;
    }
};