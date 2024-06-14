class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c = 0;
        map<int,int>map;
        int m = 0;
        for(int i = 0; i < nums.size(); i++){
            if(m==nums[i] and i!=0){ 
                nums[i]+=1;
                c++;
                }
            m = max(m,nums[i]);
            if(m!=nums[i]){
                c+=m-nums[i]+1;
                nums[i] = m+1;
                m++;
            }
        }
        return c;
    }
};