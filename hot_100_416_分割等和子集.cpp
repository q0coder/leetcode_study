class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int s = reduce(nums.begin(), nums.end());
        if (s % 2) {
            return false;
        }
        
        int n = nums.size();
        vector memo(n, vector<int>(s / 2 + 1, -1)); // -1 表示没有计算过

        // lambda 递归函数
        auto dfs = [&](this auto&& dfs, int i, int j) -> bool {
            if (i < 0) {
                return j == 0;
            }

            int& res = memo[i][j]; // 注意这里是引用
            if (res != -1) { // 之前计算过
                return res;
            }

            if (j < nums[i]) {
                return res = dfs(i - 1, j); // 只能不选
            }
            return res = dfs(i - 1, j - nums[i]) || dfs(i - 1, j); // 选或不选
        };

        return dfs(n - 1, s / 2);
    }
};

