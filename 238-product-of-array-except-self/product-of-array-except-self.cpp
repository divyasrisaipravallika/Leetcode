class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int c = 0;
        int a = 1;
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i] == 0){
                c++ ;
            }
            else{
                a*=nums[i];
            }
        }
        for(int i = 0; i < nums.size(); i++){
            if(c==1){
                if(nums[i]==0) nums[i] = a;
                else nums[i] = 0;
            }
            else if(c>1) nums[i] = 0;
            else{
                nums[i] = a/nums[i];
            }
        }
        return nums;
    }
};