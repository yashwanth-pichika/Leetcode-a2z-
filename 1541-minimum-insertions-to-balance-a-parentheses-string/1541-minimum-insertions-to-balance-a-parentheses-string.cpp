class Solution {
public:
    int minInsertions(string s) {
        int res = 0;
        int close = 0;
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push('(');
            } else {
                if (i + 1 < s.size() && s[i + 1] == ')') {
                    i++;
                    if (!st.empty()) {
                        st.pop();
                    } else if (st.empty()) {
                        res++;
                    }
                }
                else{
                    res++;
                    if(!st.empty()){
                        st.pop();
                    }
                    else{
                        res++;
                    }
                }
            }
        }
        if (!st.empty()) {
            res += st.size() * 2;
        }
        return res;
    }
};