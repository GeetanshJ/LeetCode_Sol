class Solution {
public:
    string shortestPalindrome(string s) {
        string rev = string(s.rbegin(), s.rend());
        string combined = s + "#" + rev;
        
        int n = combined.size();
        vector<int> lps(n, 0);

        for (int i = 1; i < n; i++) {
            int j = lps[i - 1];
            while (j > 0 && combined[i] != combined[j]) {
                j = lps[j - 1];
            }
            if (combined[i] == combined[j]) {
                j++;
            }
            lps[i] = j;
        }

        int palLength = lps[n - 1];
        string suffix = s.substr(palLength);
        reverse(suffix.begin(), suffix.end());
        return suffix + s;
    }
};
