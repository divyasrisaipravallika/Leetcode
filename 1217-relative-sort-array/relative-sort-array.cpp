class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>map;
        for(int i = 0; i < arr1.size(); i++){
            map[arr1[i]]++;
        }
        vector<int>v;
        for(int i = 0 ; i < arr2.size(); i++){
            if(map.find(arr2[i])!=map.end()){
                int k = map[arr2[i]];
                while(k--) {
                    v.push_back(arr2[i]);
                }
                map[arr2[i]]= 0 ;
            }
        }
        for(auto it:map){
            if(it.second!=0){
                int l = it.second;
                while(l--){
                    v.push_back(it.first);
                }
            }
        }
        return v;
    }
};