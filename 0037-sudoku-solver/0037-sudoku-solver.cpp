class Solution {
public:
    bool isSafe(int row, int col, char val, vector<vector<char>>& board){
        for(int i=0; i<9; i++){
            if(board[row][i]==val)
                return false;
            if(board[i][col]==val)
                return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==val)
                return false;
        }
        return true;
    }
    
    bool solveSudoku(vector<vector<char>>& board) {
        for(int row=0; row<9; row++){
            for(int col=0; col<9; col++){
                // Check Empty
                if(board[row][col]=='.'){
                    for(char val='1'; val<='9'; val++){
                        if(isSafe(row, col, val, board)){
                            board[row][col]=val;
                            if(solveSudoku(board))
                                return true;
                            board[row][col]='.';  // Backtrack if not possible
                        }
                    }
                    return false;  // No valid value found for the current cell
                }
            }
        }
        return true;  // Sudoku solved successfully
    }
};
