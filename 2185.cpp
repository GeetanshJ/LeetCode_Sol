class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;

        for(string s : words){
            int len = 0;
            for(int i = 0;i < pref.length(); i++){
                if(s[i] != pref[i]){
                    break;
                }

                else{
                    len++;
                }
            }

            if(len == pref.length()){
                cnt++;
            }
        }

        return cnt;
    }
};