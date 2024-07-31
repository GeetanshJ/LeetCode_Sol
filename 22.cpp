class Solution {
public:
    void createPara(int n,vector<string>&arr,string output,int open,int close){
        if(output.size() == n*2){
            arr.push_back(output);
            return;
        }

        if(open < n){
            createPara(n,arr,output + "(", open + 1,close); 
        }

        if(open > close){
            createPara(n,arr,output + ")", open,close+1);
        }

        
    }
    vector<string> generateParenthesis(int n) {
        vector<string>arr;
        string output;
        createPara(n,arr,output,0,0);

        return arr;
    }
};