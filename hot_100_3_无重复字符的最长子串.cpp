#include<iostream>
#include<string>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0 || s.size() == 1)
        {
            return s.size();
        }


        int left = 0;
        int right = 1;
        int max = 0;
        string str (1,s[0]);
        while (right < s.size())
        {
            if (str.find(s[right])==string::npos)
            {


                str += s[right];
                ++right;
            }
            else
            {
                ++left;
                while (find(str.begin(), str.end(), s[right]) != str.end())
                {
                    str.erase(0, 1);

                }

                str.push_back(s[right]);
                ++right;


            }
            if (max < str.size())
            {
                max = str.size();
            }



        }
        return max;
    }
};

int main()
{
    string str = "abcabcbb";
    Solution s;
    cout<<s.lengthOfLongestSubstring(str)<<endl;
    return 0;
}
