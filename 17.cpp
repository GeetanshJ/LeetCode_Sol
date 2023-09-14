class Solution {
public:

    void solve(string&digits,int i,vector<string>& ans,vector<string>&map,string& str){

        if(i == digits.length()){
            ans.push_back(str);
            return;
        }

        int pos = digits[i] - '0';
        string temp = map[pos];

        for(int j = 0;j < temp.length(); j++){
            str.push_back(temp[j]);
            solve(digits,i+1,ans,map,str);
            str.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length() == 0){
            return ans;
        }
       
        string str;
        vector<string> map = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        solve(digits,0,ans,map,str);

        return ans;
    }
};