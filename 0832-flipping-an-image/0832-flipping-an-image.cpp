class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>ans;
        for(int i=0;i<image.size();i++){
            vector<int>invert;
            for(int j=image.size()-1;j>=0;j--){
                if(image[i][j]==0)
                    invert.push_back(1);
                else
                    invert.push_back(0);
            }
            ans.push_back(invert);
        }
        return ans;
    }
};