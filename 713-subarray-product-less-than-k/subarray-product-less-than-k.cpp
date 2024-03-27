class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long long p = 1;
        int c = 0;
        int i = 0;
        int j = 0;
        while(j < nums.size()){
            p*=nums[j++];
            while(i <  j and p>=k){
                p/=nums[i++];
            }
            c+=(j-i);
        }
        return c;
    }
};