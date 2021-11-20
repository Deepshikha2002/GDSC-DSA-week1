class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
     int size = mat.size();
        int row = (size - 1) / 2;
        int col = (size % 2 == 0) ? row : row - 1;
        for (int k = 0; k < 3; ++k) {
            if (mat == target) {
                return true;
            }
            for (int i = 0; i <= row; ++i) {
                for (int j = 0; j <= col; ++j) {
                    auto temp = mat[i][j];
                    mat[i][j] = mat[size - j - 1][i];
                    mat[size - j - 1][i] = mat[size - i - 1][size - j - 1];
                    mat[size - i - 1][size - j - 1] = mat[j][size - i - 1];
                    mat[j][size - i - 1] = temp;
                }
            }
        }
        return mat == target;
    }
};