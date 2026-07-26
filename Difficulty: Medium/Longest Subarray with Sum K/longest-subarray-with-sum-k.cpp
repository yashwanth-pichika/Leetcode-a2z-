class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
       unordered_map<int,int> pre;
       int presum=0;
       int maxlen=0;
       for (int r = 0; r < arr.size(); r++){
           presum+=arr[r];
           
           if(presum==k){
               maxlen=max(maxlen,r+1);
           }
           int sum=presum-k;
           if(pre.find(sum)!=pre.end()){
               int len = r-pre[sum];
               maxlen=max(maxlen,len);
           }
           if(pre.find(presum)==pre.end()){
               pre[presum]=r;
           }
           
       }
       return maxlen;
    }
};