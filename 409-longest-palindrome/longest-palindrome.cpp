class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>map;
        string p = s;
        reverse(p.begin(),p.end());
        if(p==s) return s.size();
        for(int i = 0; i < s.size(); i++) map[s[i]]++;
        int k = 0;
        int ans = 0;
        int odd = 0;
        for(auto it : map){
           if(it.second%2==0) ans+=it.second;
           else {
                odd = 1;
                if(it.second==1 and k==0){
                    ans+=1;
                    k = 1;
                }
                else if(it.second==1 and k == 1){
                    continue;
                }
                else {
                    ans+=it.second-1;
                }
           }
        }
        if (k==0 and odd==1) ans+=1;
        return ans;
    }
};