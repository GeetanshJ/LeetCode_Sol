class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1; 
        long long result = 0;  
    
        while (i < s.length() && s[i] == ' ') {
            i++;
        }
        
        if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        
        while (i < s.length() && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            
            if (sign == 1 && result > INT_MAX) {
                return INT_MAX;
            } else if (sign == -1 && -result < INT_MIN) {
                return INT_MIN;
            }
            
            i++;
        }
        
        return sign * result;
    }
};
