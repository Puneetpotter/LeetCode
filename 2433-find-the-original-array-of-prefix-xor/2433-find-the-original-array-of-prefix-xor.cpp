class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>ans;
        int xors=pref[0];
        ans.push_back(pref[0]);
        if(pref.size()>1){
        ans.push_back(pref[0]^pref[1]);
        for(int i=2;i<pref.size();i++){
            xors=xors^ans.back();
            ans.push_back(xors^pref[i]);
          //  int xors=xors^j;
        }
        }
        return ans;
    }
};