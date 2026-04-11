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
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//    
//};
//
//class Solution {
//
//public:
//    bool isSymmetric(TreeNode* root) {
//        queue<TreeNode*>que1;
//        queue<TreeNode*>que2;
//
//        que1.push(root->left);
//        que2.push(root->right);
//        while (!que1.empty() && !que2.empty())
//        {
//            TreeNode* root1 = que1.front();
//            TreeNode* root2 = que2.front();
//            que1.pop();
//            que2.pop();
//            if (root1 == nullptr && root2 == nullptr)
//            {
//                continue;
//            }
//            if (root1 == nullptr || root2 == nullptr || (root1->val != root2->val))
//            {
//                return false;
//            }
//            que1.push(root1->left);
//            que1.push(root1->right);
//            que2.push(root2->right);
//            que2.push(root2->left);
//
//
//
//
//
//        }
//        return true;
//
//    }
//
//
//};