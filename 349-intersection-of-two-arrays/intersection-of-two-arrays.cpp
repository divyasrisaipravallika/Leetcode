class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        map<int,int>map;
        vector<int>v;
        int i = 0;
        int j = 0;
        while(i<nums1.size() and j<nums2.size()){
            if(nums1[i]==nums2[j] and map.find(nums1[i])==map.end()){
                v.push_back(nums1[i]);
                map[nums1[i]]++;
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]) i++;
            else j++;
        }
        return v;
    }
};