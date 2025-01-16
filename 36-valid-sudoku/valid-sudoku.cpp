class Solution {
public:
    bool check_valid (vector<char> v ) {
        map<char, int> m;
        for (char c : v) {
            if (c != '.') {
                if (m.count(c) > 0) {
                    return false;
                }
                m[c] = 1;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for (vector<char> v : board) {
            if (!check_valid(v)) {
                return false;
            }
        }
        int n = board.size() , m = board[0].size();
        for (int j = 0; j < m; ++j) {
            vector<char>column;
            for (int i = 0; i < n; ++i) {
                column.push_back(board[i][j]);
            }
            if (!check_valid(column)) {
                return false;
            }
        }
        for (int i = 0; i < n; i+=3) {
            for (int j = 0; j < m; j+=3) {
                vector<char>square;
                for (int k = 0; k < 3; ++k) {
                    for (int l = 0; l < 3; ++l) {
                        square.push_back(board[i+k][j+l]);
                    }
                }
                if (!check_valid(square)) {
                    return false;
                }
            }
        }
        return true;

    }
};