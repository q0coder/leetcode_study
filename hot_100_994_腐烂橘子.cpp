#define _CRT_SECURE_NO_WARNINGS
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int, int>> q;
        int fresh_count = 0;

        // 方向数组：上、下、左、右
        vector<pair<int, int>> directions = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };

        // 1. 初始化：统计新鲜橘子，并将初始烂橘子入队
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 1) {
                    fresh_count++;
                }
                else if (grid[i][j] == 2) {
                    q.push({ i, j });
                }
            }
        }

        // 如果没有新鲜橘子，直接返回 0
        if (fresh_count == 0) return 0;

        int minutes = 0;

        // 2. BFS 层序遍历
        while (!q.empty() && fresh_count > 0) {
            int size = q.size(); // 当前这一分钟要处理的烂橘子数量
            for (int i = 0; i < size; ++i) {
                auto [x, y] = q.front();
                q.pop();

                // 向四个方向扩散
                for (auto [dx, dy] : directions) {
                    int nx = x + dx;
                    int ny = y + dy;

                    // 检查边界以及是否是新鲜橘子
                    if (nx >= 0 && nx < m && ny >= 0 && ny < n && grid[nx][ny] == 1) {
                        grid[nx][ny] = 2;      // 感染成烂橘子
                        fresh_count--;         // 新鲜橘子数量减一
                        q.push({ nx, ny });      // 新烂橘子入队，准备下一分钟扩散
                    }
                }
            }
            minutes++; // 这一分钟处理完毕，时间加一
        }

        // 3. 判断结果
        return fresh_count == 0 ? minutes : -1;
    }
};