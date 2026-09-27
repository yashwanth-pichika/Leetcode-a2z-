class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        string res;

        for(char c:s){
            if(c==')'){
                string t;
                while(st.top()!='('){
                    t+=st.top();
                    st.pop();
                }
                st.pop();
                for (char x : t) {
                    st.push(x);
                }
            }
            else{
                st.push(c);
            }
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());

        return res;
    }
};