#define _CRT_SECURE_NO_WARNINGS
class Solution {
    vector<vector<int>>vec;

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int x[11];

        subsets(nums, 0, x);
        return vec;
    }
    void subsets(vector<int>& nums, int i, int x[]) {
        if (i == nums.size())
        {
            vector<int>v;


            for (int j = 0; j < i; ++j)
            {
                if (x[j] == 1)
                    v.push_back(nums[j]);
            }

            vec.push_back(v);
            return;
        }
        x[i] = 1;
        subsets(nums, i + 1, x);
        x[i] = 0;
        subsets(nums, i + 1, x);

    }
};