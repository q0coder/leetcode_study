#include<iostream>
#include<vector>
using namespace std;


//class Solution {
//public:
//    vector<vector<int>> levelOrder(TreeNode* root) {
//        vector<vector<int>> vec;
//        if (root == nullptr) return vec; // 【修正1】处理空树情况
//
//        queue<TreeNode*> que;
//        que.push(root);
//
//        while (!que.empty()) {
//            int size = que.size(); // 【关键】记录当前层有多少个节点
//            vector<int> level_vals; // 临时数组存储当前层的值
//
//            for (int i = 0; i < size; i++) {
//                TreeNode* node = que.front();
//                que.pop();
//                level_vals.push_back(node->val); // 存入当前层数组
//
//                // 将下一层的节点加入队列
//                if (node->left != nullptr) que.push(node->left);
//                if (node->right != nullptr) que.push(node->right);
//            }
//
//            vec.push_back(level_vals); // 将当前层的结果加入总结果
//        }
//        return vec;
//    }
//};
