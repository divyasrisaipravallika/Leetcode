class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
       stringstream ss(s1);
       string s;
        vector<string> v;
        map<string,int>map;
        while (getline(ss, s, ' ')) {
            map[s]++;
        } 
        stringstream ss2(s2);
        string x;
        while(getline(ss2,x,' ')) map[x]++;
        for(auto it : map) {
            if(it.second==1) v.push_back(it.first);
        }
        return v;
    }
};