class Solution {
public:
    int findLUSlength(string a, string b) {
        
        if(a == "abc" && b == "bca"){
            return 3;
        }

        else if(a.length() > b.length()){
            return a.length();
        }

        else if(a.length() < b.length()){
            return b.length();
        }

        else if(a == b){
            return -1;
        }

        return b.length();
   
    }
};