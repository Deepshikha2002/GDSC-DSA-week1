class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int sqr = n * n;
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int k = 1;
        int t = 0, b = n - 1, l = 0, r = n - 1;
        int dirn = 0;
        while (k <= sqr)
        {
            if (dirn == 0)
            {
                int i = t;
                int j = l;
                while (j <= r)
                {
                    ans[i][j] = k;
                    ++k;
                    ++j;
                }
                ++t;
            }
            else if (dirn == 1)
            {
                int i = t;
                int j = r;
                while (i <= b)
                {
                    ans[i][j] = k;
                    ++k;
                    ++i;
                }
                --r;
            }
            else if (dirn == 2)
            {
                int i = b;
                int j = r;
                while (j >= l)
                {
                    ans[i][j] = k;
                    ++k;
                    --j;
                }
                --b;
            }
            else if (dirn == 3)
            {
                int i = b;
                int j = l;
                while (i >= t)
                {
                    ans[i][j] = k;
                    ++k;
                    --i;
                }
                ++l;
            }

            dirn = (dirn + 1) % 4;
        }
        return ans;
    }
};