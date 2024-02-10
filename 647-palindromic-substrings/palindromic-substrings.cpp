class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        for(int a = 0 ; a<s.size(); a++){
            string st = "";
            for(int b = a; b<s.size() ;b++)
            {
                st+=s[b];
                int i = 0;
                int j = st.size()-1;
                int flag = 0;
                while(i<=j){
                    if(st[i]!=st[j])
                    {
                        flag = 1;
                        break;
                    }
                    i+=1;
                    j-=1;
                }
                if(flag==0) count++;
            }
        }
        return count;
    }
};