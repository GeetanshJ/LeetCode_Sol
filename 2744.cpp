class Solution {
public:
    bool isequal(string s,string r){
        if(s[0] == r[1] && s[1] == r[0]){
            return true;
        }
        return false;
    }    

    int maximumNumberOfStringPairs(vector<string>& words) {
        int cnt = 0;
        sort(words.begin(),words.end());

        for(int i = 0;i < words.size() - 1; i++){
            for(int j = i + 1;j < words.size(); j++){
                if(isequal(words[i],words[j])){
                    cnt++;
                }
            }
        }

        return cnt;
    }
};