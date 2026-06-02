class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return _rebuild(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
    }

    // 注意这里去掉了 []，直接使用 vector<int>& 
    TreeNode* _rebuild(vector<int>& pre, int i, int j, vector<int>& in, int m, int n) {
        if (i > j || m > n) {
            return nullptr;
        }
        
        TreeNode* node = new TreeNode(pre[i]);
        
        for (size_t k = m; k <= n; ++k) {
            if (pre[i] == in[k]) {
                // 左子树：前序 [i+1, i+(k-m)]，中序 [m, k-1]
                node->left = _rebuild(pre, i + 1, i + (k - m), in, m, k - 1);
                
                // 右子树：前序 [i+(k-m)+1, j]，中序 [k+1, n]
                node->right = _rebuild(pre, i + (k - m) + 1, j, in, k + 1, n);
                
                return node;
            }
        }
        return node;
    }
};