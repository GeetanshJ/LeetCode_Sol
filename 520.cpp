class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt = 0;

        if(word.length() == 1){
            return true;
        }

        
        for(int i = 0 ;i < word.length(); i++){
            if(i >= 1 && cnt == 0 && word[i] >= 'A' && word[i] <= 'Z'){
                return false;
            }
            if(word[i] >= 'A' && word[i] <= 'Z'){
                cnt++;
            }
        }
        

        return cnt == 0 || cnt == word.length() || cnt == 1 ? true : false;
    }
};