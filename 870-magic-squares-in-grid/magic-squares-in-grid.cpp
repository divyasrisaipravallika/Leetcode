class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int count = 0;
        if(grid.size()<3) return 0;
        for(int i = 0 ; i <= grid.size()-3;  i++){
            
           for(int j =0 ; j<= grid.size()-3; j++){    
             int z = 0;
                int a = 0;
                map<int,int>map;
                vector<vector<int>>v;
                for(int p = i; p < i+3; p++){
                    vector<int>vi;
                    for(int k = j; k < j+3 ; k++){
                    map[grid[p][k]]++;
                    vi.push_back(grid[p][k]);
                    cout<<grid[p][k]<<" ";
                }
                
                for(auto it:map){
                    if(it.first > 9 or it.first==0) z = 1;
                }
                v.push_back(vi);
                cout<<endl;
            }
                if(map.size()==9 and z==0){
                    int n = 0;
                    int flag = 0 , l, m , h;
                    for(int x = 0; x < v.size() ; x++){
                          l = 0;
                          m = 0;
                          h = 0;
                        for(int y = 0; y < v[x].size(); y++){
                            l+=v[x][y];
                            m+=v[y][x];
                            if(x==y) n+=v[x][y];
                            if(l!=m) flag=1;
                        }
                        h = h+ v[0][2]+v[1][1]+v[2][0];
                    }
                    if(n==h and n==m and h==l and flag ==1) count++;
                }
               
            }
           
        }
        return count;
    }
};