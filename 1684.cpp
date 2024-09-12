class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt = words.size();
        vector<char>arr;
        for(int i = 0;i < allowed.size(); i++){
            arr.push_back(allowed[i]);
        }

        for(int i = 0;i < words.size(); i++){
           for(int j = 0;j < words[i].size(); j++){
                if(find(arr.begin(),arr.end(),words[i][j]) == arr.end()){
                    cnt--;
                    break;
                }
            }
        }

        return cnt;
    }
};