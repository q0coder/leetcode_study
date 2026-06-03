/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // 辅助函数：计算从当前节点 root 出发，向下寻找和为 targetSum 的路径数
    int dfs(TreeNode* root, long targetSum) {
        if (root == nullptr) return 0;
        
        int count = 0;
        // 如果当前节点的值刚好等于剩余的目标值，说明找到了一条有效路径
        if (root->val == targetSum) {
            count++;
        }
        // 注意：即使找到了路径，也要继续向左右子树搜索（因为可能有负数）
        count += dfs(root->left, targetSum - root->val);
        count += dfs(root->right, targetSum - root->val);
        return count;
    }

    // 主函数：遍历所有节点，让每个节点都尝试作为起点
    int pathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return 0;
        
        // 以当前节点为起点的满足条件的路径数
        int result = dfs(root, targetSum);
        // 加上不以当前节点为起点的路径数（即在左、右子树中寻找）
        result += pathSum(root->left, targetSum);
        result += pathSum(root->right, targetSum);
        
        return result;
    }
};