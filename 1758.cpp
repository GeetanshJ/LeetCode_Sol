class Solution {
public:
    int minOperations(string s) {
        int alt0 = 0;
        int alt1 = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (i % 2 == 0) {
                if (s[i] == '0') {
                    alt1++;
                } else {
                    alt0++;
                }
            } else {
                if (s[i] == '1') {
                    alt1++;
                } else {
                    alt0++;
                }
            }
        }
        
        return min(alt0, alt1);
    }
};