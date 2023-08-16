class Solution {
public:
    bool isSubsequence(string s, string t) {

        int i = 0,j = 0;

        if(s.length() == 0){
            return true;
        }

        if(t.length() == 0){
            return false;
        }


        while(i < s.length()){
            while(j < t.length()){
                if(s[i] == t[j]){
                    i++;
                }
                j++;
            }

            if(s[i] != t[j] && j == t.length()){
                return false;
            }

            if(i == s.length() && j == t.length()){
                return true;
            }
        }

        return false;
    }
};