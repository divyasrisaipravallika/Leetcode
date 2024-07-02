class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>num1;
        map<int,int>num2;
        vector<int>ans;
        for(int i = 0; i < nums1.size(); i++) num1[nums1[i]]++;
        for(int i = 0; i < nums2.size(); i++) {
            if(num1.find(nums2[i])!=num1.end() and num1[nums2[i]]!=0){
                ans.push_back(nums2[i]);
                num1[nums2[i]]--;
            }
        }
        return ans;
    }
};