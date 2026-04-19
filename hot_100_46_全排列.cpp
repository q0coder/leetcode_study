#include<iostream>
#include<vector>
using namespace std;

class Solution {
    vector<vector<int>>vec;

public:
    vector<vector<int>> permute(vector<int>& nums)
    {

        permute(nums, 0, nums.size());
        return vec;
    }
    void permute(vector<int>& nums, int i, int length)
    {
        if (i == length)
        {
            vec.emplace_back(nums);

        }
        for (int k = i; k < length; ++k)
        {
            swap(nums[i], nums[k]);
            permute(nums, i + 1, length);
            swap(nums[i], nums[k]);
        }

    }
};