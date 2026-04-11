//#include<iostream>
//#include<unordered_map>
//#include<vector>
//#include<forward_list>
//using namespace std;
//
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//    
//};
//
//class Solution {
//    int x = 0;
//public:
//    int diameterOfBinaryTree(TreeNode* root) {
//
//        deepth(root);
//        return x;
//    }
//    int deepth(TreeNode* root)
//    {
//        if (root == nullptr)
//        {
//            return 0;
//        }
//        int l = deepth(root->left);
//        int r = deepth(root->right);
//        x = max(x, l + r);
//        return max(l, r) + 1;
//    }
//};