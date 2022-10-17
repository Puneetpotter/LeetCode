class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>comp;
        int count=0;
        for(int i=0;i<heights.size();i++){
          comp.push_back(heights[i]);
        }
        sort(comp.begin(),comp.end());
        for(int i=0;i<heights.size();i++){
          if(comp[i]!=heights[i])
              count++;
        }
        return count;
    }
};