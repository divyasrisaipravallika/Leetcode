class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>map;
        long long m = 0;
        int c = 0;
        for(int i = 0; i < nums.size(); i++){
            m += nums[i];
            if(i==0 and m==k) c++;
            else if(m==k) c++;
            if(map.find(m-k)!=map.end()){
                c+=map[m-k];
            }
            map[m]++;;
          
        }
        return c;
    }
};