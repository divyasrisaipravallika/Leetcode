class Solution {
public:
    int majorityElement(vector<int>& nums) {
       map<int,int>map;
       for(int i = 0 ; i < nums.size(); i++){
           map[nums[i]]++;
       } 
       int c = 0;
       int n = nums.size();
       for(int i = 0 ; i <nums.size();i++){
           if(map[nums[i]]>(n/2)){
               return nums[i];
           }
       }
       return 0;
    }
};