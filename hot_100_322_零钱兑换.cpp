class Solution {
public:
    int coinChange(std::vector<int>& coins, int amount) {
        // 初始化 dp 数组，大小为 amount + 1，初始值设为 amount + 1 (代表无穷大)
        // 这里用 amount + 1 是因为即使用面值 1 的硬币，最多也只需要 amount 个
        std::vector<int> dp(amount + 1, amount + 1);
        
        // 边界条件：凑成 0 元需要 0 个硬币
        dp[0] = 0;

        // 遍历每一个金额状态
        for (int i = 1; i <= amount; ++i) {
            // 遍历每一种硬币
            for (int coin : coins) {
                // 只有当金额大于等于硬币面额时，才能使用该硬币
                if (i >= coin) {
                    // 状态转移：取“当前值”和“使用当前硬币后的值”的最小值
                    dp[i] = std::min(dp[i], dp[i - coin] + 1);
                }
            }
        }

        // 如果 dp[amount] 没有被更新过，说明无法凑成，返回 -1
        return dp[amount] > amount ? -1 : dp[amount];
    }
};