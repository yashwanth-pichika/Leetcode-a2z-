class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string ch : tokens) {

            if (ch == "+" || ch == "-" || ch == "*" || ch == "/") {

                int v1 = st.top();
                st.pop();

                int v2 = st.top();
                st.pop();

                int res;

                switch (ch[0]) {
                    case '+':
                        res = v2 + v1;
                        break;

                    case '-':
                        res = v2 - v1;
                        break;

                    case '*':
                        res = v2 * v1;
                        break;

                    case '/':
                        res = v2 / v1;
                        break;
                }

                st.push(res);
            }
            else {
                st.push(stoi(ch));
            }
        }

        return st.top();
    }
};