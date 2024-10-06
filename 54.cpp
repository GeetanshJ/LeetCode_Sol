class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        
        if (matrix.empty()) return result;

        int left = 0, right = matrix[0].size() - 1;
        int top = 0, down = matrix.size() - 1;

        while (left <= right && top <= down) {
            for (int i = left; i <= right; ++i) {
                result.push_back(matrix[top][i]);
            }
            top++;

            for (int i = top; i <= down; ++i) {
                result.push_back(matrix[i][right]);
            }
            right--;

            if (top <= down) {
                for (int i = right; i >= left; --i) {
                    result.push_back(matrix[down][i]);
                }
                down--;
            }

            if (left <= right) {
                for (int i = down; i >= top; --i) {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return result;
    }
};
