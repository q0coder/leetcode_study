#define _CRT_SECURE_NO_WARNINGS
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>>dp(row, vector<int>(col, INT_MAX));

        dp[0][0] = grid[0][0];
        for (int i = 0; i < grid.size(); ++i)
        {
            for (int j = 0; j < grid[0].size(); ++j)
            {
                if ((i - 1) >= 0)
                {
                    dp[i][j] = dp[i - 1][j] + grid[i][j];
                }
                if ((j - 1) >= 0)
                {
                    dp[i][j] = min(dp[i][j - 1] + grid[i][j], dp[i][j]);
                }

            }
        }

        return dp[row - 1][col - 1];
    }
};