#define _CRT_SECURE_NO_WARNINGS
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = 0;
        for (i = nums.size() - 1; i >= 0; --i)
        {

            if ((i + 1) < nums.size() && nums[i] < nums[i + 1])
            {
                for (int j = nums.size() - 1; j > i; --j)
                {
                    if (nums[j] > nums[i])
                    {
                        swap(nums[i], nums[j]);
                        break;


                    }

                }

                break;
            }


        }
        auto it = nums.begin() + i + 1;
        sort(it, nums.end());
    }
};