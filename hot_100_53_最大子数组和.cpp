#include<iostream>
#include<vector>
using namespace std;
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//
//
//
//        int max = nums[0];
//        int min = 0;
//        int pre = 0;
//        for (auto v : nums)
//        {
//            pre += v;
//
//            if (max < (pre - min))
//            {
//                max = pre - min;
//            }
//            if (min > pre)
//            {
//                min = pre;
//            }
//
//        }
//        return max;
//
//    }
//};

    class Solution {
        int max;
    public:
        int maxSubArray(vector<int>& nums) {
            max = nums[0];
            int l = 0;
            int r = nums.size() - 1;
            return maxSubArray(nums, l, r);
        }
        int maxSubArray(vector<int>& nums, int l, int r)
        {
            if (l == r)
            {
                return nums[l];
            }
            int mid = (l + r) / 2;
            int n1 = maxSubArray(nums, l, mid);
            int n2 = maxSubArray(nums, mid + 1, r);
            if (max < (n1 + n2))
            {
                max = n1 + n2;
                return max;
            }
            else
            {
               ;
            }
            return max;
        }
    };

int main()
{
    vector<int>vec{ -2,1,-3,4,-1,2,1,-5,4 };
    Solution s;
    cout<<s.maxSubArray(vec)<<endl;
    return 0;
}