class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>map;
        for(int i = 0 ; i < nums.size() ; i++){
            map[nums[i]]++;
        }
        vector<int>v;
        for(auto it : map){
            if(it.second==2) v.push_back(it.first);
        }
        return v;
    }
};