class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size()-1;
        int a = 0;
        if(n <= 2){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int mn = *min_element(nums.begin(),nums.end());
        int mx = *max_element(nums.begin(),nums.end());
        a = abs(mn-nums[n-3]);
        a = min(a,abs(nums[3]-mx));
        a = min(a,abs(nums[1]-nums[n-2]));
        a = min(a,abs(nums[2]-nums[n-1]));
        return a;
    }
};