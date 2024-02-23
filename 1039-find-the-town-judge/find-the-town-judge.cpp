class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t) {
        map<int,int>map1;
        map<int,int>map2;
        for(int i=0;i<t.size(); i++){
            map1[t[i][0]]++;
        }
        for(int i = 0; i < t.size(); i++){
            if(map1.find(t[i][1])==map1.end()){
                map2[t[i][1]]++;
            }
        }
        for(int i = 1 ;i <=n; i++){
            if(map1[i]<=0 and map2[i]>=(n-1)) return i;
        }
        return -1;
    }
};