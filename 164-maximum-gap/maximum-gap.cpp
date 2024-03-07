class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2) return 0;
        sort(nums.begin(), nums.end());
        int m =  0;
        for(int i = 0 ; i < nums.size()-1; i++){
            m = max(m,abs(nums[i]-nums[i+1]));
        }
        return m;
    }
};