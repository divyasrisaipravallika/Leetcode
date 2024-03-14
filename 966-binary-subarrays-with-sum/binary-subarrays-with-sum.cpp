class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        map<int,int>map;
        int m = 0;
        int c = 0;
        for(int i = 0 ; i < nums.size(); i++){
            m+=nums[i];
            if(m-k==0 and i==0) c++;
            if(m==k and i!=0) c++;
            if(map.find(m-k)!=map.end()){
                c+=map[m-k];
            }
            map[m]++;
        }
        return c;
    }
};