/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Base case：如果 root 是空，或就是 p 或 q，直接返回
        if (!root || root == p || root == q) return root;

        // 在左子树中找 p 或 q
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        // 在右子树中找 p 或 q
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        // 情况1：左右都找到 → 当前 root 就是最近公共祖先
        if (left && right) return root;

        // 情况2：只找到一个 → 把那个往上返回
        return left ? left : right;
    }
};