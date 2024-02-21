class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
         int ans = 0;
         if(left==1073741824 and right==2147483647) return 1073741824;
         if(left==right) return left&right;
         vector<int>v;
         int c = 0;
         while(c<=31){
             int k = 1;
         for(long long i = left; i <=right; i++){
            if(((1<<c)&i)==0){
                      k=0;
                      break;
            }
          }
           if(k==1){
                 ans+=pow(2,c);
             }
             c++;
         }
         return ans;
    }
};