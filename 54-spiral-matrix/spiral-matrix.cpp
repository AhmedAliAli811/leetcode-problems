class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int left = 0  , right = matrix[0].size() , top = 0 , down = matrix.size();
        while (left < right && top < down) {
            for (int i = left; i < right; i++) {
                res.push_back(matrix[top][i]);
            }
            top++;
            for (int i = top; i < down; i++) {
                res.push_back(matrix[i][right-1]);
            }
            right--;
            if(!(left < right && top < down))
                break;

            for (int i = right-1; i >= left; i--) {
                res.push_back(matrix[down - 1 ][i]);
            }
            down--;

            for (int i = down - 1; i >= top; i--) {
                res.push_back(matrix[i][left]);
            }
            left++;
        }
        return res;

    }
};