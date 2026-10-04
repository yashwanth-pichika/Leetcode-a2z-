class Solution {
public:
    string removeStars(string s) {
        vector<char> st;

        for(char ch:s){
            if(ch=='*'){
                st.pop_back();
            }
            else{
                st.push_back(ch);
            }
        }
        string res="";

        for(char a:st){
            res+=a;
        }
        return res;
    }
};