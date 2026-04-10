#include<iostream>
#include<queue>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
    
};
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr)
        {
            return nullptr;
        }
        queue<TreeNode*>que;
        TreeNode* cur = root;
        TreeNode* pre = root;
        que.push(root);
        while (!que.empty())
        {
            cur = que.front();
            que.pop();
            if (cur->left != nullptr && cur->right != nullptr)
            {
                TreeNode* temp = cur->left;
                cur->left = cur->right;
                cur->right = temp;
                que.push(cur->left);
                que.push(cur->right);
            }
            else if (cur->left != nullptr)
            {
                cur->right = cur->left;
                cur->left = nullptr;
                que.push(cur->right);
            }
            else if (cur->right != nullptr)
            {
                cur->left = cur->right;
                cur->right = nullptr;
                que.push(cur->left);
            }


        }
        return root;
    }

};

int main()
{

}
