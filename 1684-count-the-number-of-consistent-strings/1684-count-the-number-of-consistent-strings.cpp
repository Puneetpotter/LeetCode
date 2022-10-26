class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
      map<char,int>m;
        int t=0;
        for(auto i:allowed)
            m[i]++;
        for(auto i:words){
            int j=0;
            for(j=0;j<i.size();j++){
                if(m[i[j]]==0){
                    t--;
                    break;
                }
            }
         //   if(m[i[j]]!=0)
                t++;
        }
        return t;
    }
};