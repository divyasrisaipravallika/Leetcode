class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int i = 0;
        while(i < arr.size()){
            if(arr[i]%2==1){
                int c = 0;
                while(i < arr.size() and arr[i]%2==1){
                    i++;
                    c++;
                }
                if(c >= 3) return true;
                
            }
            else i++;
        }
        return false;
    }
};