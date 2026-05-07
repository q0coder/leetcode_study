#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int i = 0;
        int j = nums.size();
        if (j == 0)
            return { -1,-1 };
        return searchRange(nums, i, j, target);
    }
    vector<int> searchRange(vector<int>& nums, int i, int j, int target)
    {
        int  mid = i + ((j - i) >> 1);

        if (i > j)
        {
            return { -1,-1 };
        }

        else if (nums[mid] > target)
            return searchRange(nums, i, mid - 1, target);
        else if (nums[mid] < target)
            return searchRange(nums, mid + 1, j, target);
        else if (nums[mid] == target)
        {
            int l = 0;
            int r = 0;
            for (int i = mid; i >= 0; --i)
            {
                if (nums[i] == target)
                {
                    l = i;
                }
            }
            for (int j = mid; j < nums.size(); ++j)
            {
                if (nums[j] == target)
                {
                    r = j;
                }
            }
            return { l,r };
        }
        return {};
    }
};
int main()
{
    Solution s;
    vector<int>vec{ 2,2 };
    s.searchRange(vec, 3);
}