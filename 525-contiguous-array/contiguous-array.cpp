class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans = 0;
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i]==0) nums[i] = -1;
        }
        int sum = 0;
        map<int,int>m;
        for(int i = 0 ; i < nums.size() ; i++){
            sum+=nums[i];
            if(sum==0) ans = i+1;
            if(m.find(sum)!=m.end()){
                ans =  max(ans,i-m[sum]);
            }
            else
            {
                m[sum] = i;
            }
        }
        return ans;
    }
};