class Solution {
public:
    string countAndSay(int n) {
        
        string res="1";
        for(int i=1;i<n;i++){
            string next="";
            int j=0;
            while(j<res.size()){
                int count=1;
                while(j+1<res.size() && res[j]==res[j+1]){
                    count++;
                    j++;
                }
                next+=to_string(count);
                next+=res[j];
                j++;
            }
            res=next;
        }

        return res;
    }
};