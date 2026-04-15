#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int pre_sum = 0;
        int count = 0;
        unordered_map<int, int>mp{ {0,1} };
        for (auto v : nums)
        {
            int t = 0;
            pre_sum += v;
             t = pre_sum - k;

            mp.emplace(pre_sum, 1);

            if (mp.find(t) != mp.end())
            {
                count += mp[t];

            }

        }
        return count;
    }
};

int main()
{
    vector<int>vec{ 1,1,1 };
    Solution s;
    int k = 2;
    cout<<s.subarraySum(vec,2)<<endl;
    return 0;
}