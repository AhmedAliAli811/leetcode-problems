class Solution {
public:
    int dx[9] = { 1 , -1 , 0 , 0 , 1 , -1 , 1 , -1};
    int dy[9] = {  0 , 0 , 1 , -1 , 1 , 1 , -1 , -1};
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> temp = board;
        int n = temp.size();
        int m = temp[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int num_of_ones = 0;
                for (int k = 0; k < 8; k++) {
                    int x = i + dx[k];
                    int y = j + dy[k];
                    if (x >= 0 && x < n && y >= 0 && y < m) {
                        num_of_ones += temp[x][y];
                    }
                }
                if (temp[i][j] == 1) {
                    if (num_of_ones < 2 ) {
                        board[i][j] = 0;
                    }
                    else if (num_of_ones < 4 ) {
                        board[i][j] = 1;
                    }
                    else {
                        board[i][j] = 0;
                    }
                }
                else {
                    if (num_of_ones == 3) {
                        board[i][j] = 1;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }

};