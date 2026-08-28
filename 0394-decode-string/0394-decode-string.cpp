class Solution {
public:
    string decodeString(string s) {
        string res="";
        int num=0;
        stack<pair<string,int>> st;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                num=num*10+(s[i]-'0');
            }
            else if(s[i]=='['){
                st.push({res,num});
                res="";
                num=0;
            }
            else if(s[i]==']'){
                string pre=st.top().first;
                int n=st.top().second;
                st.pop();
                for(int j=0;j<n;j++){
                    pre+=res;
                }
                res=pre;
            }
            else{
                res+=s[i];
            }
        }
        return res;

    }
};