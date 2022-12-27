class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int s=0;
        int end=row*col-1;
        int mid=(s+end)/2;
        while(s<=end){
            int temp=matrix[mid/col][mid%col];
            if(temp==target)
                return 1;
            else if(temp<target)
                s=mid+1;
            else
                end=mid-1;
            mid=(s+end)/2;
        }
        return 0;
    }
};