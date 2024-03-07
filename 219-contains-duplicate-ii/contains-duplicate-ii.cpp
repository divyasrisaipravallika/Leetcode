class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,vector<int>>map;
        for(int i = 0; i < nums.size(); i++){
            if(map.find(nums[i])!=map.end()){
                vector<int>v = map[nums[i]];
                for(int j = 0; j < v.size(); j++) if(abs(v[j]-i)<=k) return true;
                v.push_back(i);
                map[nums[i]] = v;
            }
            else{
                map[nums[i]] = {i};
            }
        }
        return false;
    }
};