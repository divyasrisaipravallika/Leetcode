class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        int n = nums.size();
        int ans = 0;
        int i=0,j=0;
        while(j < n){
            map[nums[j]]++;
            while(map[nums[j]] > k){
                map[nums[i]]--;
                i++;
            }
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};