//#include<iostream>
//#include<vector>
//#include<stack>
//#include<string>
//#include<unordered_set>
//#include<unordered_map>
//using namespace std;
//
//int majorityElement(vector<int>& nums) {
//    unordered_map<int, int>mp;
//    int MAX = 0;
//    int result = 0;
//    if (nums.size() == 1)
//    {
//        return nums[0];
//    }
//    for (auto v : nums)
//    {
//        if (mp.find(v) != mp.end())
//        {
//            mp[v]++;
//        }
//        else
//        {
//            mp.emplace(v, 1);
//        }
//    }
//    for (auto pair : mp)
//    {
//        if (MAX < pair.second)
//        {
//            MAX = pair.second;
//            result = pair.first;
//        }
//    }
//    return result;
//}
//
//int main()
//{
//
//}