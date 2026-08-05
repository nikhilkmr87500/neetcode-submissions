class Solution {
public:
    bool check_valid_col(vector<vector<char>>& board, int row, int col){
        vector<int> test(10, 0);
        for(int i = 0; i < 9; i++){
            if((board[i][col] - '0') && (test[board[i][col] - '0'] == 1)) 
                return false;
            if (board[i][col] == '.')
                continue;
            test[board[i][col] - '0'] = 1;
        }
        return true;
    }
    bool check_valid_row(vector<vector<char>>& board, int row, int col){
        vector<int> test(10, 0);
        for(int i = 0; i < 9; i++){
            if((board[row][i] - '0') && (test[board[row][i] - '0'] == 1)) 
                return false;
            if (board[row][i] == '.')
                continue;
            test[board[row][i] - '0'] = 1;
        }
        return true;
    }
    bool check_valid_box(vector<vector<char>>& board, int row, int col){
        vector<int> test(10, 0);
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if (board[row+j][col+i] == '.')
                    continue;
                if((board[row+j][col+i] - '0') && (test[board[row+j][col+i] - '0'] == 1)) 
                    return false;
                test[board[row+j][col+i] - '0'] = 1;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        bool ans = true;

        for(int i = 0; i<9; i++){
            ans = check_valid_row(board, 0+i, 0);
            if(!ans) return ans;

        }
        for(int i = 0; i<9; i++){
            ans = check_valid_col(board, 0, i);
            if(!ans) return ans;
        }
        for(int i = 0; i<3; i++){
            for(int j = 0; j<3; j++){
                ans = check_valid_box(board, i*3, j*3);
                if(!ans) return ans;
            }
        }
        return ans;
    }
};
