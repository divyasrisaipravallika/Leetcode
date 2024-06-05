class Solution {
public:
    map<char,long long>m;
    void fun(map<char,long long>n){
        for(auto it: m){
            if(n.find(it.first)==n.end()){
                m[it.first] = 0;
            }
        }
        for(auto it : n){
            if(m.find(it.first)!=m.end()){
                if(it.second!=m[it.first]){
                    long long mi = min(m[it.first],it.second);
                    m[it.first] = mi;
                }
            }
        }
    }
    vector<string> commonChars(vector<string>& words) {
        for(int i = 0; i < words[0].size(); i++){
            m[words[0][i]]++;
        }
        for(int i = 1 ; i < words.size(); i++){
            map<char,long long>n;
            for(int j = 0; j < words[i].size(); j++){
                n[words[i][j]]++;
            }
            fun(n);
            n.erase(n.begin(),n.end());
        }
        vector<string>v;
        for(auto it : m){
            int k = it.second;
            while(k!=0){
            string s = "";
            s+=it.first;
            v.push_back(s);
            k--;
            }
        }
        return v;
    }
};