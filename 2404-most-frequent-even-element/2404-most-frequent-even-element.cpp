class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>m;
        sort(nums.begin(),nums.end());
        for(auto i:nums){
            if(i%2==0)
                m[i]++;
        }
        int res=0,count=0;
        for(auto i:m){
           if(count<i.second){
               res=i.first;
               count=i.second;
           }
        }
        if(count!=0)
            return res;
        return -1;
    }
};