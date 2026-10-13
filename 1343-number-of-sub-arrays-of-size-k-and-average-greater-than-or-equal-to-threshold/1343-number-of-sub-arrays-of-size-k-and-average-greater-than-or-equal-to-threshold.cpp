class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
        int count=0;
        int sum=0;
        for(int r=0;r<arr.size();r++){
            sum+=arr[r];

            if(r>=k-1){
                if(sum>=k*threshold){
                    count++;
                }
                sum-=arr[r-k+1];
            }
            
        }

        return count;
    }
};