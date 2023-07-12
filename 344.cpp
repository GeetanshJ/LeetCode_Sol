class Solution {
public:
    void reverseString(vector<char>& s) {
        
        vector<char> ans;
        int cnt = 0;

        for(int i = 0;i < s.size(); i++){
            ans.push_back(s[i]);
        }

        s.clear();
        
        for(int i = ans.size() - 1;i >= 0; i--){
            s.push_back(ans[i]);
        }
    }
};