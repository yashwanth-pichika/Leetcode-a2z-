class Solution {
public:
    string convert(string s, int numRows) {
        if(s.size()<=numRows || numRows==1){
            return s;
        }
        vector<string> rows(numRows);
        int row=0;
        bool godown=true;
        for(char ch:s){
            rows[row]+=ch;
            if(row==0){
                godown=true;
            }
            if(row==numRows-1){
                godown=false;
            }
            if(godown){
                row++;
            }
            else{
                row--;
            }
        } 
        string res="";
        for(string a:rows){
            res+=a;
        }
        return res;
    }
};