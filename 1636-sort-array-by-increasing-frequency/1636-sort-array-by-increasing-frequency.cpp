class Solution {
public:
    map<int, int> freq; 
    vector<int> frequencySort(vector<int>& nums) {
        for(auto i:nums){
            freq[i]++;
        }
        
        sort(nums.begin(), nums.end(), [&](int a, int b){
        if(freq[a]==freq[b])
            return a>b;
        else
            return freq[a]<freq[b];
    });
        
        return nums;
    }
};