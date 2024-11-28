class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        vector<bool> row(matrix.size(),false);
        vector<bool> col(matrix.size(),false);

        for(int i = 0;i < matrix.size(); i++){
            for(int j = 0;j < matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    row[i] = true;
                    col[j] = true;
                }
            }
        }

        for(int i = 0;i < matrix.size(); i++){
            if(row[i]){
                for(int j = 0;j < matrix[0].size(); j++){
                    matrix[i][j] = 0;
                }
            }
        }

        for(int i = 0;i < matrix[0].size(); i++){
            if(col[i]){
                for(int j = 0;j < matrix.size(); j++){
                    matrix[j][i] = 0;
                }
            }
        }

    }
};