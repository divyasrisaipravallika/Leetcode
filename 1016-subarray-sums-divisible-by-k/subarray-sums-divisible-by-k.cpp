class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int>map;
        int m = 0;
        int c = 0;
        int rem;
        for(int i = 0 ;  i < nums.size(); i++)
        {
            m += nums[i];
            rem = m%k;
            if(rem<0) rem = k+rem;
            if(map[rem]<-1)
            {
                map[rem] = 1;
            }
            else
            {   
                 c += map[rem];
                 map[rem] += 1;
            }
            if(rem==0)
            {
                c+=1;
            }
        }
        return c;
    }
};