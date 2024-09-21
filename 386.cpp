class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        vector<string>arr;

        for(int i = 1;i <= n; i++){
            arr.push_back(to_string(i));
        }

        sort(arr.begin(),arr.end());

        for(string s : arr){
            ans.push_back(stoi(s));
        }

        return ans;
    }
};