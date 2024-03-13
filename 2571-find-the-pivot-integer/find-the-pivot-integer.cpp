class Solution {
public:
    int pivotInteger(int n) {
        if(n==1) return 1;
        vector<int>v;
        int s = 0;
        for(int i = 1 ; i <= n; i++){
            s += i;
            v.push_back(s);
        }
         for(int i = 0; i < v.size() ; i++){
           cout<<v[i]<<endl;
        }
        int a = v.size()-1;
        for(int i = 0; i < v.size() ; i++){
            if(i == 0 or i == a) continue;
           if((v[a]-v[i-1]) == v[i]) return i+1;
        }
        return -1;
    }
};