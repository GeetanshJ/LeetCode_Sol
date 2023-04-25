class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {

        int height = matrix.length;
        int width = matrix[0].length;

        for(int i = 0;i < height; i++){
            for(int j = 0;j < width; j++){
                if(matrix[i][j] == target){
                    return true;
                }
            }
        }
        return false;
    }
}