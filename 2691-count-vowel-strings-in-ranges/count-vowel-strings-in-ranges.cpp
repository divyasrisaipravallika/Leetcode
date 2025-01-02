class Solution {
public:
    vector<int> vowelStrings(vector<string>& w, vector<vector<int>>& q) {
        vector<int>p;
        int c = 0;
        vector<int>a;
        for(int i = 0; i < w.size(); i++){
            if(w[i][0]=='a' or w[i][0]=='e' or w[i][0]=='i' or w[i][0]=='o' or w[i][0]=='u'){
                int n = w[i].size();
                char ch = w[i][n-1];
                if(ch=='a' or ch=='i' or ch=='o' or ch=='e' or ch=='u'){
                    c++;
                }
            }
            p.push_back(c);
        }
        for(int i = 0; i < q.size(); i++){
            int x = q[i][0], y = q[i][1];
            int z;
            if(x!=0){
                z = p[y]-p[x-1];
                if(z>0)a.push_back(z);
                else a.push_back(0);
            }
            else{
                z = p[y];
                if(z>0) a.push_back(z);
                else a.push_back(0);
            }
        }
        return a;
    }
};