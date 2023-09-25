class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int zeros = 0;
        for(int i = 0;i < s.length();i++){
            if(s[i] == '0'){
                zeros++;
            }
        }

        string str = "";

        for(int i = 0;i < zeros;i++){
            str.push_back('0');
        }

        str.push_back('1');

        for(int i = 0;i < s.length() - zeros - 1;i++){
            str.insert(str.begin(),'1');
        }

        return str;
    }
};