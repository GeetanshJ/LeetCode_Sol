class Solution {
public:
unordered_map<int,bool> rowCheck;
    unordered_map<int,bool> upperLeftDiagnolCheck;
    unordered_map<int,bool> bottomLeftDiagnolCheck;

    void storeSolution(vector<vector<char>> &board, int n, vector<vector<string> > &ans,int& cnt) {
        vector<string> temp;
        for(int i=0; i<n; i++) {
            string output = "";
            for(int j=0; j<n ;j++) {
                output.push_back(board[i][j]);
            }
            temp.push_back(output);
        }
        ans.push_back(temp);
        cnt++;
    }


    bool isSafe(int row, int col, vector<vector<char>> &board, int n) {

        if(rowCheck[row] == true )
            return false;
            
        if(upperLeftDiagnolCheck[n-1+col-row] == true)
            return false;
            
        if(bottomLeftDiagnolCheck[row+col] == true)
            return false;

        return true;   
}



    void solve(vector<vector<char>> &board, int col, int n, vector<vector<string> > &ans  ,int &cnt) {
    //base case
    if(col >= n) {
        storeSolution(board, n, ans,cnt);
        return ;
    }

    //1 case solve karna h , baaki recursion sambhal lega

    for(int row = 0; row <n; row++) {
        if(isSafe(row, col, board, n)) {
        //rakh do
        board[row][col] = 'Q';
        rowCheck[row] = true;
        upperLeftDiagnolCheck[n-1+col-row] = true;
        bottomLeftDiagnolCheck[row+col] = true;
            
        //recursion solution laega
        solve(board, col+1, n, ans,cnt);
        //backtracking
        board[row][col] = '.';
        rowCheck[row] = false;
        upperLeftDiagnolCheck[n-1+col-row] = false;
        bottomLeftDiagnolCheck[row+col] = false;
        }

    }
}



    int totalNQueens(int n) {
        vector<vector<char>> board(n, vector<char>(n,'.'));
        vector<vector<string> > ans;
        int col = 0,cnt = 0;
        //0 -> empty cell
        //1 -> Queen at the cell
        solve(board, col, n, ans,cnt);
        return cnt;
    }
};