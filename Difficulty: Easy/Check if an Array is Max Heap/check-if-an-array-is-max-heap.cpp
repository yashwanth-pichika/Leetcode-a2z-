class Solution {
  public:
    bool isMaxHeap(vector<int> &arr) {
        // code here
        int n=arr.size();
        
        for(int i=0;i<n/2;i++){
            int left=2*i+1;
            
            if(left<n && arr[i]<arr[left]){
                return false;
            }
            int right=2*i+2;
            
            if(right<n && arr[i]<arr[right]){
                return false;
            }
        }
        
        return true;
    }
};
