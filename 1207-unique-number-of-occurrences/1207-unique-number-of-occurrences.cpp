class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m;
        set<int>s;
        for(int i=0;i<arr.size();i++)
            m[arr[i]]++;
        for(int i=0;i<arr.size();i++)
            s.insert(m[arr[i]]);
        if(s.size()<m.size())
            return false;
        return true;
    }
};