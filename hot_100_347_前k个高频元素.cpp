#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;


class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>>que;
        unordered_map<int, int>mp;
        vector<int>vec;
        for (auto v : nums)
        {
            ++mp[v];
        }
        for (auto v : mp)
        {
            que.push({ v.second,v.first });
        }
        for (int i = 0; i < k; ++i)
        {
            vec.push_back(que.top().second);
            que.pop();

        }
        return vec;
    }
};