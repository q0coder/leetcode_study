#define _CRT_SECURE_NO_WARNINGS
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.size() == 1)
            return;
        reverse(nums.begin(), nums.end());
        auto it = nums.begin() + k % nums.size();
        reverse(nums.begin(), it);
        reverse(it, nums.end());

    }
};