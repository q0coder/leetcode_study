#define _CRT_SECURE_NO_WARNINGS
class Solution {
public:
    int jump(vector<int>& nums) {
        int size = nums.size();
        int step = 0;
        int curent_end = 0;
        int max_reach = 0;
        for (int i = 0; i < nums.size() - 1; ++i)
        {
            max_reach = max(max_reach, nums[i] + i);
            if (curent_end == i)
            {
                ++step;
                curent_end = max_reach;
            }
            if (curent_end >= size - 1)
            {
                return step;
            }
        }
        return 0;
    }
};