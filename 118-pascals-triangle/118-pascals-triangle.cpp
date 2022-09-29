class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> r(numRows);
        for(int i=0; i<numRows; i++){
            r[i].resize(i+1); // increase the size of next row by 1
        r[i][0]=r[i][i]=1; // initialize first and last element of each row as 1
        
        for(int  j=1; j<i;j++)
            r[i][j]= r[i-1][j-1]+r[i-1][j]; // perform simple addition of elements of above row 
            }
     return r;
    }
};