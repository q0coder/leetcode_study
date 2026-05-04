#define _CRT_SECURE_NO_WARNINGS
lass Solution{
public:

    long long prev = LONG_MIN;

    bool isValidBST(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }


        if (!isValidBST(root->left)) {
            return false;
        }


        if (root->val <= prev) {
            return false;
        }
        prev = root->val;


        return isValidBST(root->right);
    }
};