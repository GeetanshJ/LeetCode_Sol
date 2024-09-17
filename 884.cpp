class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> words;
        istringstream stream(s1);
        string word;

        while(stream >> word){
            words.push_back(word);
        }

        istringstream stream1(s2);
        word;

        while(stream1 >> word){
            words.push_back(word);
        }

        vector<string> sol;

        unordered_map<string,int> map;
        for(string word : words){
            map[word]++;
        }

        for(auto it : map){
            if(it.second == 1){
                sol.push_back(it.first);
            }
        }

        return sol;
    }
};