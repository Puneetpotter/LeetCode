class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int, int>mp;
        int n=arr.size();
        vector<pair<int, int>>freq;
        
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        
        for(auto it:mp)
            freq.push_back(make_pair(it.second, it.first));
        
        sort(freq.begin(), freq.end());
        
        int result=0;
        int ans=0;
        
        while(result<n/2){
            result+=freq.back().first;
            freq.pop_back();
            ans++;
        }
        return ans;
    }
};