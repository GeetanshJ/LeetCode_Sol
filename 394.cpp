class Solution {
public:
    

string decodeString(string s) {
    stack<string> strStack;
    stack<int> numStack;
    string currentStr = "";
    int currentNum = 0;

    for (int i = 0; i < s.length(); ++i) {
        char ch = s[i];

        if (isdigit(ch)) {
            currentNum = currentNum * 10 + (ch - '0');
        } 
        
        else if (ch == '[') {
            strStack.push(currentStr);
            numStack.push(currentNum);
            currentStr = "";  
            currentNum = 0;
        } 
        
        else if (ch == ']') {
            int repeatTimes = numStack.top();
            numStack.pop();
            string tempStr = currentStr;
            currentStr = strStack.top();
            strStack.pop();
            while (repeatTimes-- > 0) {
                currentStr += tempStr;
            }
        } 
        
        else {
            currentStr += ch;
        }
    }

    return currentStr;  
}


};