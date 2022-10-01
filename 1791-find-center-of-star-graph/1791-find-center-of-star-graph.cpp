class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int ans;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                if((edges[i][0]==edges[j][0])||edges[i][0]==edges[j][1]){
                    ans=edges[i][0];
                    break;
                }
                else{
                    ans=edges[i][1];
                break;
                }
            }
        }
        return ans;
    }
};