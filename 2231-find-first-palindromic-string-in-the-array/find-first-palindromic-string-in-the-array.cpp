class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int a = 0; a < words.size(); a++){
            int i = 0;
            int j = words[a].size()-1;
            int f = 0;
            while(i<=j){
                if(words[a][i]!=words[a][j]){
                    f = 1;
                    break;
                }
                i+=1;
                j-=1;
            }
            if(f==0) return words[a];
        }
        return "";
    }
};