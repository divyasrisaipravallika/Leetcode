class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>map;
        for(int i = 0; i < nums.size(); i++) map[nums[i]]++;
        int m = 0;
        for(auto it : map){
            m = max(it.second,m);
        }
        int c = 0;
        for(auto it: map){
            if(it.second == m) c++;
        }
        return c*m;
    }
};