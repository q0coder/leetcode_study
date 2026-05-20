#define _CRT_SECURE_NO_WARNINGS
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // 1. 直接命中
            if (nums[mid] == target) {
                return mid;
            }

            // 2. 判断哪一边是有序的
            // 注意：这里用 <= 是为了处理只有两个元素的情况，或者 mid 和 left 重合的情况
            if (nums[left] <= nums[mid]) {
                // --- 左半部分有序 ---
                // 判断 target 是否在这个有序区间内
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid - 1; // 在左边，收缩右边界
                }
                else {
                    left = mid + 1;  // 不在左边，去右边
                }
            }
            else {
                // --- 右半部分有序 ---
                // 判断 target 是否在这个有序区间内
                if (nums[mid] < target && target <= nums[right]) {
                    left = mid + 1;  // 在右边，收缩左边界
                }
                else {
                    right = mid - 1; // 不在右边，去左边
                }
            }
        }
        return -1;
    }
};