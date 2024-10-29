class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int>map;
        for(int i = 0; i < edges.size(); i++){
            for(int j = 0; j < 2; j++) map[edges[i][j]]++;
        }
        for(auto it: map){
            if(it.second == edges.size()) return it.first;
        }
        return 0;
    }
};