class Solution {
public:
    string reverseOnlyLetters(string s) {
        
        int i = 0,j = s.length() - 1;
        while(i <= j){
            if(isalpha(s[i])){
                if(isalpha(s[j])){
                    swap(s[i],s[j]);
                    i++;
                    j--;
                }

                else{
                    j--;
                }
            }

            else if(isalpha(s[j])){
                if(!isalpha(s[i])){
                    i++;
                }
            }

            else{
                i++;
                j--;
            }
        }

        return s;
    }

};