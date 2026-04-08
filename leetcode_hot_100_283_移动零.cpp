//#include<iostream>
//#include<vector>
//using namespace std;
//

////Ë«Ö¸Õë¸²¸Ç
//class Solution {
//public:
//    void moveZeroes(vector<int>& nums)
//    {
//        int i = 0;
//        int j = 0;
//        for (; i <= nums.size() - 1; i++)
//        {
//            if (nums[i] != 0)
//            {
//                nums[j] = nums[i];
//                j++;
//            }
//        }
//        for (; j < i; j++)
//        {
//            nums[j] = 0;
//        }
//    }
//    };
//
//int main()
//{
//    Solution s;
//    vector<int>vec{0, 1, 0, 3, 12};
//    s.moveZeroes(vec);
//    for (auto v : vec)
//        cout << v << " ";
//}
//
//
////Ë«Ö¸Õë½»»»
//class Solution {
//public:
//    void moveZeroes(vector<int>& nums) {
//        int i = 0;
//        int j = 0;
//        for (; i <= nums.size() - 1; i++)
//        {
//            if (nums[i] != 0)
//            {
//                int temp = nums[j];
//                nums[j] = nums[i];
//                nums[i] = temp;
//                j++;
//            }
//        }
//
//    }
//};