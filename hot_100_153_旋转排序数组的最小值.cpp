class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = -1, right = nums.size() - 1; // 开区间 (-1, n-1)
        while (left + 1 < right) { // 开区间不为空
            int mid = left + (right - left) / 2;
            (nums[mid] < nums.back() ? right : left) = mid;
        }
        return nums[right];
    }
};