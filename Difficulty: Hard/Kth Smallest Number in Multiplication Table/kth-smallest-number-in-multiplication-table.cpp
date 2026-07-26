class Solution {
  public:
    int kthSmallest(int n, int m, int k) {
        // code here
        int low=1,high=n*m;
        int ans=high;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            
            int count=0;
            for(int i=1;i<=n;++i){
                count+=min(mid/i,m);
            }
            
            if(count>=k){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
        
    }
};
