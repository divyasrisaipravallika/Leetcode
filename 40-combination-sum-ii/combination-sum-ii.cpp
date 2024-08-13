class Solution {
public:
    void recursion(vector<int>can, int t,int i, int size,vector<int>&ans,set<vector<int>>&main,int s)
    {   
        if(s==t)
        {   
            sort(ans.begin(),ans.end());
            main.insert(ans);
            return;
        }
        if(i>=size)
        {
           return;
        }
        else if(s > t) return;
        ans.push_back(can[i]);
        recursion(can,t,i+1,size,ans,main,s+can[i]);
        while(i+1 <size and can[i]==can[i+1]) i++;
        ans.pop_back();
        recursion(can,t,i+1,size,ans,main,s);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>>main;
        vector<int>ans;
        int sum = 0;
        for(int i = 0 ; i<candidates.size();i++) sum+=candidates[i];
        vector<vector<int>>res;
        if(sum<target) return res;
        if(sum==target)
        {
            res.push_back(candidates);
            return res;
        }
        sort(candidates.begin(),candidates.end());
        recursion(candidates,target,0,candidates.size(),ans,main,0);
        for(auto it: main)
        {
            res.push_back(it);
        }
        return res;
    }
};