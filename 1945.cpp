class Solution {
public:
    int getLucky(string s, int k) {
        string str = "";
        
        for (char ch : s) {
            str += to_string(ch - 'a' + 1);
        }

        int res = 0;

        for (char digit : str) {
            res += digit - '0'; 
        }

        k--;
        while (k > 0) {
            int midSum = 0;
            while (res > 0) {
                midSum += res % 10;
                res /= 10;
            }
            res = midSum;
            k--;
        }

        return res;
    }
};
