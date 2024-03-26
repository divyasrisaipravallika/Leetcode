class Solution {
public:
    int firstMissingPositive(vector<int>& n) {
       sort(n.begin(), n.end());
       int m = n[n.size()-1];
       map<int,int>map;
       if(m<0) return 1;
       for(int i = 0; i < n.size(); i++) map[n[i]]++;
       for(int i = 1 ; i < m; i++){
        if(map.find(i)==map.end()) return i;
       }
       return m+1;
    }
};