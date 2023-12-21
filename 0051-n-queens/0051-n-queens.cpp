class Solution {
public:
    bool isSafe(int row, int col, vector<vector<string>> board, int n){
        int x=row;
        int y=col;
        
        //SAME ROW
        while(y>=0){
            if(board[x][y]=="Q")
                return false;
            y--;
        }
        
        x=row;
        y=col;
        //SAME DIAGONAL (LEFT-UPPER)
        while(x>=0 and y>=0){
            if(board[x][y]=="Q")
                return false;
            x--;
            y--;
        }
        
        x=row;
        y=col;
        //SAME DIAGONAL (RIGHT-LOWER)
        while(x<n and y>=0){
            if(board[x][y]=="Q")
                return false;
            x++;
            y--;
        }
        return true;
    }
    
    void addSolution(vector<vector<string>> &ans, vector<vector<string>> board, int n){
        vector<string>temp;
        for(int i=0; i<n; i++){
            string s="";
            for(int j=0; j<n; j++){
                s.append(board[i][j]);
            }
            temp.push_back(s);
        }
        ans.push_back(temp);
    }
    
    void solve(int col, vector<vector<string>> &ans, vector<vector<string>> board, int n){
        if(col==n){
            addSolution(ans, board, n);
            return;
        }
        
        for(int row=0; row<n; row++){
            if(isSafe(row, col, board, n)){
                board[row][col]="Q";
                solve(col+1, ans, board, n);
                board[row][col]=".";
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<vector<string>> board(n, vector<string>(n, "."));
        
        solve(0, ans, board, n);
        return ans;
    }
};