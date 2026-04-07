#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
//
// 暴力解法：（O(n^2)）
// 
//class Solution
//{
//public:
//	vector<int> twoSum(vector<int>& nums, int target)
//	{
//		vector<int>vec;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			for (int j = i + 1; j < nums.size(); j++)
//			{
//				if (nums[i] + nums[j] == target)
//				{
//					vec.push_back(nums[i]);
//					vec.push_back(nums[j]);
//					return vec;
//				}
//			}
//		}
//	}
//};
//
//
//int main()
//{
//
//}

//优化解法：哈希表（O(n)）;
class Solution
{
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		vector<int>vec;
		for (int i = 0; i < nums.size(); i++)
		{
			for (int j = i + 1; j < nums.size(); j++)
			{
				if (nums[i] + nums[j] == target)
				{
					vec.push_back(nums[i]);
					vec.push_back(nums[j]);
					return vec;
				}
			}
		}
	}
};
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int>vec;
		unordered_map<int, int>mp;

		for (int i = 0; i < nums.size(); i++)
		{
			int complement = target - nums[i];
			if (mp.find(complement) != mp.end())
			{
				vec.push_back(i);
				vec.push_back(mp[complement]);
				return vec;
			}
			else if (complement > 0)
			{
				mp.emplace(nums[i], i);
			}
		}
	}
};

int main()
{
	
}




