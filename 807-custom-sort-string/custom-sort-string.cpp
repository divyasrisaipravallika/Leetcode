class Solution {
public:
    string customSortString(string order, string s) {
        string ans;
        map<char,int>map;
        for(int i = 0; i < s.size(); i++){
            map[s[i]]++;
        }
        for(int i = 0; i < order.size(); i++){
            if(map[order[i]]!=0){
                while(map[order[i]]!=0){
                    ans+=order[i];
                    map[order[i]]-=1;
                }
            }
        }
        for(auto it:map){
            while(it.second){
                ans+=it.first;
                it.second--;
            }
        }
        return ans;
    }
};