#define _CRT_SECURE_NO_WARNINGS
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*>st;


        while (!st.empty() || root != nullptr)
        {

            while (root != nullptr)
            {

                st.push(root);
                root = root->left;
            }
            root = st.top();
            st.pop();

            --k;
            if (k == 0)
            {
                return root->val;

            }
            root = root->right;

        }
        return -1;
    }
};