class Solution {
public:
    string removeStars(string s) {
        stack<char> st;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '*'){
                if(!st.empty()){
                    st.pop();
                }
            } 
            else {
                st.push(s[i]);
            }
        }

        string result;
        while(!st.empty()){
            result += st.top(); 
            st.pop();
        }

        reverse(result.begin(), result.end());

        return result;
    }
};
