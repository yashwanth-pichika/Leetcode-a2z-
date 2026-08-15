class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int tot_xor=0;
        int non_zero=false;
        for (int num:nums){
            tot_xor^=num;
            if(num!=0){
                non_zero=true;
            }
        }

        if(tot_xor!=0){
            return nums.size();
        }
        if(non_zero){
            return nums.size()-1;
        }
        return 0;
    }
};