class Solution {
public:
   vector<string>v;
    void recursion(int n,int open, int close,string s){
        if(open+close==(n*2)){
            v.push_back(s);
            return;
        }
        if(close>open) return;
        if(open>=n){
            recursion(n,open,close+1,s+')');
        }
        else{
            recursion(n,open+1,close,s+'(');
            recursion(n,open,close+1,s+')');
        }

    }
    vector<string> generateParenthesis(int n) {
        recursion(n,0,0,"");
        return v;
    }
};