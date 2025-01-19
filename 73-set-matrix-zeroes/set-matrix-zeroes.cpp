class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool first_row = false;
        bool first_col = false;
        int rows = matrix.size();
        int cols = matrix[0].size();
        for (int col = 0; col < cols; col++) {
            if (matrix[0][col] == 0) {
                first_row = true;
                break;
            }
        }
        for (int row = 0; row < rows; row++) {
            if (matrix[row][0] == 0) {
                first_col = true;
                break;
            }
        }
        for (int row = 1; row < rows; row++) {
            for (int col = 1; col < cols; col++) {
                if (matrix[row][col] == 0) {
                    matrix[0][col] = 0;
                    matrix[row][0] = 0;
                }
            }
        }

        for (int col = 1; col < cols; col++) {
            if (matrix[0][col] == 0) {
                for (int row = 1; row < rows; row++) {
                    matrix[row][col] = 0;
                }
            }
        }
        for (int row = 1; row < rows; row++) {
            if (matrix[row][0] == 0) {
                for (int col = 1; col < cols; col++) {
                    matrix[row][col] = 0;
                }
            }
        }
        if (first_row) {
            for (int col = 0; col < cols; col++) {
                matrix[0][col] = 0;
            }
        }
        if (first_col) {
            for (int row = 0; row < rows; row++) {
                matrix[row][0] = 0;
            }
        }
        for (int i = 0 ; i < rows; i++) {
            for (int col = 0; col < cols; col++) {
                cout << matrix[i][col] << " ";
            }
            cout << endl;
        }
    }
};