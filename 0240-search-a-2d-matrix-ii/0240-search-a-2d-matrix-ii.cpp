class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int rowpos=0;
        int colpos=col-1;
        int mid=(rowpos+colpos)/2;
        while(rowpos<row && colpos>=0){
            int temp=matrix[rowpos][colpos];
            if(temp==target)
                return 1;
            else if(temp<target)
                rowpos++;
            else
                colpos--;
            mid=(rowpos+colpos)/2;
        }
        return 0;
    }
};