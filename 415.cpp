class Solution {
public:

    void RE(string &num1,int ptr1,string& num2,int ptr2,int carry,string& ans){
        if(ptr1 < 0 && ptr2 < 0){
            if(carry != 0){
                ans.push_back(carry + '0');
            }
            return;
        }

        int n1 = (ptr1 >= 0 ? num1[ptr1] : '0') - '0';
        int n2 = (ptr2 >= 0 ? num2[ptr2] : '0') - '0';

        int csum = n1 + n2 + carry;
        int digit = csum % 10;
        carry = csum / 10;

        ans.push_back(digit + '0');

        RE(num1,ptr1 - 1,num2,ptr2 - 1,carry,ans);
    }
    
    string addStrings(string num1, string num2) {
        string ans = "";
        RE(num1,num1.length() - 1,num2,num2.length() - 1,0,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }

};