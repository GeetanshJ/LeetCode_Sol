class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string res = "";

        for(auto x: words){
            res += x[0];
        }

        return res == s;
    }
};