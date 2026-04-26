#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        int curent = 0;
        while (curent <= j)
        {
            if (nums[curent] == 0)
            {
                swap(nums[curent], nums[i]);
                ++curent;

                ++i;
            }
            else if (nums[curent] == 2)
            {
                swap(nums[curent], nums[j]);
                --j;
            }
            else
            {
                ++curent;
            }
        }
    }
};
