//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};

//  class Solution {
//  public:
//      vector<int> inorderTraversal(TreeNode* root)
//      {
//          vector<int>vec;
//          inorderTraversal(root, vec);
//
//          return vec;
//
//      }
//      void inorderTraversal(TreeNode* root, vector<int>& vec)
//      {
//          if (root == nullptr)
//          {
//              return;
//          }
//          inorderTraversal(root->left, vec);
//          vec.push_back(root->val);
//          inorderTraversal(root->right, vec);
//
//      }
//  };
//

  //∑«µ›πÈ µœ÷
//class Solution {
//public:
//    vector<int> inorderTraversal(TreeNode* root) {
//        vector<int> vec;
//        stack<TreeNode*> stk;
//
//
//        while (!stk.empty() || root != nullptr) {
//
//
//            if (root != nullptr) {
//                stk.push(root);
//                root = root->left;
//
//
//            }
//            else {
//                root = stk.top();
//                vec.push_back(stk.top()->val);
//                stk.pop();
//
//                root = root->right;
//
//            }
//        }
//
//        return vec;
//    }
//};
//
//int main()
//{
//
//}