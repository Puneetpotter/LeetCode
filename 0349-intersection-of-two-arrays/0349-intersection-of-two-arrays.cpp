class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>ans;
        int i=0;
        while(i<nums1.size()){
            int j=0;
            while(j<nums2.size()){
                if(nums1[i]==nums2[j]){
                    ans.insert(nums1[i]);
                   // continue;
                }
                j++;
            }
            i++;
        }
        vector<int>v(ans.begin(),ans.end());
        return v;
    }
};