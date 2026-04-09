//#include<iostream>
//#include<vector>
//#include<stack>
//#include<string>
//#include<unordered_set>
//using namespace std;
//
////普通解法
//int singleNumber(vector<int>& nums) {
//    if (nums.size() == 1)
//    {
//        return nums[0];
//    }
//
//    unordered_set<int>st;
//    for (auto v : nums)
//    {
//        if (st.find(v) != st.end())
//        {
//            st.erase(v);
//        }
//        else
//        {
//            st.emplace(v);
//        }
//    }
//
//    return *st.begin();
//
//}
//
//
////技巧：利用按位异或性质
//int main()
//{
//
//}