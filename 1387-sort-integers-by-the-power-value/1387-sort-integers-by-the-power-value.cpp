class Solution {
public:
    int power(int i){
        int count=0;
        while(i!=1){
            if(i%2!=0)
                i=3*i+1;
            else
                i=i/2;
            count++;
        }
        return count;
    }
    
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>> v;
        for(int i=lo;i<=hi;i++){
            v.push_back({power(i),i});
        }
        sort(v.begin(),v.end());
        return v[k-1].second;
    }
};