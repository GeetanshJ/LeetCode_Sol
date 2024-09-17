class Solution {
public:
    int compress(vector<char>& chars) {
        string res = "";
        int cnt = 1;

        for(int i = 0; i < chars.size(); i++) {
            if(i + 1 < chars.size() && chars[i] == chars[i + 1]) {
                cnt++;
            } 
            
            else {
                res += chars[i];

                if (cnt > 1) {
                    res += to_string(cnt);
                }

                cnt = 1;
            }
        }

        for(int i = 0; i < res.size(); i++) {
            chars[i] = res[i];
        }

        return res.size();
    }
};
