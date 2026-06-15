class Solution {
public:
    int longestCommonSubsequence(string s, string t) {
        int n = s.size(), m = t.size();
        vector memo(n, vector<int>(m, -1)); // -1 表示没有计算过

        // lambda 递归
        auto dfs = [&](this auto&& dfs, int i, int j) -> int {
            if (i < 0 || j < 0) {
                return 0;
            }
            int& res = memo[i][j]; // 注意这里是引用
            if (res != -1) {
                return res; // 之前计算过
            }
            if (s[i] == t[j]) {
                return res = dfs(i - 1, j - 1) + 1;
            }
            return res = max(dfs(i - 1, j), dfs(i, j - 1));
        };

        return dfs(n - 1, m - 1);
    }
};
