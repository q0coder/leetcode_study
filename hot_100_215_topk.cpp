#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int L = 0;
        int R = nums.size() - 1;
        return QuickSort(nums, L, R, k);
    }
    int QuickSort(vector<int>& nums, int L, int R, int k)
    {
        int pos = Partation(nums, L, R);
        if (pos == k - 1)
            return nums[pos];

        else if (pos > k - 1)
            return QuickSort(nums, L, pos - 1, k);
        else
            return QuickSort(nums, pos + 1, R, k);

    }
    int Partation(vector<int>& nums, int L, int R)
    {
        int p = rand() % (R - L + 1) + L;
        swap(nums[L], nums[p]);
        int val = nums[L];

        while (L < R)
        {
            while (L < R && nums[R] < val)
            {
                R--;
            }
            if (L < R)
            {
                nums[L] = nums[R];
                L++;
            }
            while (L<R && nums[L]>val)
            {
                L++;
            }
            if (L < R)
            {
                nums[R] = nums[L];
                R--;
            }

        }
        

        nums[L] = val;
        return L;


    }
};
int main()
{
    vector<int>vec{ 3,2,1,5,6,4 };
    int k = 2;
    Solution s;
    cout<<s.findKthLargest(vec, k);
}