class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        priority_queue<int>q;
        int c = 0;
        int f = 0,i=0;
        for(i = 0; i < h.size()-1; i++){
            if(h[i]>=h[i+1]) {
                c++;
            }
            else{
              int d = abs(h[i]-h[i+1]);
              b-=d;
              q.push(d);
              if(b>=0) c++;
              else if(b<0 and l>0){
                  b+=q.top();
                  q.pop();
                  l-=1;
                  c++;
              }  
              else if(b<0 and l<=0){
                  return c;
              }
            }
          }
        return c;
    }
};