class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int l = 0;
        int r = matrix.size() - 1;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                swap(matrix[l][j], matrix[j][r]);
            }
            l++ , r--;
        }
        l = 0 , r = matrix.size() - 1;
        int bottom_row = matrix[0].size() - 1;
        int top_row = 1;
        for (int j = 0; j < matrix.size() / 2 ; j++) {
            for (int i = bottom_row; i >= top_row; i--) {
                swap(matrix[i][l], matrix[matrix.size()-1-i][r]);
            }
            l++ , r--;
            top_row++;
            bottom_row--;
        }
    }
};