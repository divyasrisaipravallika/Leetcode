class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
       map<int,int>map;
       for(int i = 0 ; i < arr.size(); i++) map[arr[i]]++;
       vector<int>v;
       for(auto it: map){
           cout<<it.first<<" "<<it.second<<endl;
           v.push_back(it.second);
       }
       sort(v.begin(),v.end());
       int c = 0;
       for(int i=0;i<v.size();i++){
           if(k-v[i]>0){
              k = k-v[i];
           }
           else if(k-v[i]==0){
               return v.size()-i-1;
           }
           else
           {   
               return v.size()-i;
           }
       }
       return c;
    }
};