class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>map;
        int j = 0;
        int i = 0;
        int c = 0;
        while(i < s.size() and j < s.size()){
            if(map.find(s[j])==map.end() or map[s[j]]!=1){
                map[s[j]] = 1;
                c = max(c,j-i+1);
                j++;
            }
            else{
                map[s[i]] = 0;
                i++;
            }
        }
        return c;
    }
};