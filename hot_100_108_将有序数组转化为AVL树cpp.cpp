//#include<iostream>
//#include<vector>
//using namespace std;
//
//
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
//public:
//    TreeNode* sortedArrayToBST(vector<int>& nums) {
//        TreeNode* root = new TreeNode(nums[nums.size() / 2]);
//        TreeNode* nodel = root;
//        TreeNode* noder = root;
//        for (int i = 0; i < nums.size()/2; i++)
//        {
//            nodel->left = new TreeNode(nums[i]);
//            nodel = nodel->left;
//        }
//        for (int j = nums.size() / 2 + 1; j < nums.size(); j++)
//        {
//            noder->right = new TreeNode(nums[j]);
//            noder = noder->right;
//        }
//        return root;
//    }
//};
//
//
//int main()
//{
//    vector<int>vec{ -10,-3,0,5,9 };
//    Solution s;
//    s.sortedArrayToBST(vec);
//    return 0;
//}