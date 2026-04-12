#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;



class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp;
        vector<vector<string>> vec;
      
        for (auto s : strs)
        {
            string s_c = s;
            sort(s_c.begin(), s_c.end());
            if (mp.find(s_c) == mp.end())
            {
                mp[s_c].emplace_back(s);
            }
            else
            {
                mp[s_c].push_back(s);
            }

        }
        for (auto pair : mp)
        {
            vec.push_back(pair.second);
           
        }
        return vec;



    }
};

int main()
{

}