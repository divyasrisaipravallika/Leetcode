class Solution {
public:
    int bagOfTokensScore(vector<int>& t, int power) {
        sort(t.begin(),t.end());
        int i = 0;
        int c = 0,m = 0;
        int j = t.size()-1;
        while(i <= j){
            if(t[i]<=power){
                power-=t[i];
                t[i] = 0;
                c++;
                i++; 
            }
            else if(i<j and c>0){
              //  int k = t[t.size()-1];
                c--;
                power+=t[j];
                t[j] = 0;
                j--;
            }
            else return c;
        }
        return c;
    }
};