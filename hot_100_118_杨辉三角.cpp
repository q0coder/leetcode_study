#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<unordered_set>
#include<unordered_map>
using namespace std;

class Solution {
public:
   
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>>dp;
        dp.resize(numRows);
        for (int i = 0; i <= numRows-1; i++)
        {
            dp[i].resize(i+1, 1);
        }
        return generate(numRows, dp);
    }
    vector<vector<int>> generate(int numRows, vector<vector<int>>dp)
    {
       /* if (!dp[numRows].empty())
        {
            return dp;
        }*/

        if (numRows == 1)
        {
            dp[numRows-1] = { 1 };
            return dp;

        }
        if (numRows == 2)
        {
            dp[numRows - 2] = { 1 };
            dp[numRows-1] = { 1,1 };
            return dp;
        }
       

        for (int i = 1; i < dp[numRows-1].size() - 1; i++)
        {

            dp[numRows-1][i] = dp[numRows - 2][i - 1] + dp[numRows - 2][i];

        }

        dp = generate(numRows - 1, dp);



        return dp;

    }
};

//class Solution {
//public:
//    vector<vector<int>> generate(int numRows) {
//        vector<vector<int>> dp;
//        dp.resize(numRows);
//        for (int i = 0; i <= numRows - 1; i++) {
//            dp[i].resize(i + 1, 1);
//        }
//        for (int i = 2; i <= numRows; i++) {
//            for (int j = 1; j < dp[i - 1].size() - 1; j++) {
//
//                dp[i - 1][j] = dp[i - 2][j - 1] + dp[i - 2][j];
//            }
//        }
//
//        return dp;
//    }
//    };

int main()
{
    Solution s;
    auto vec=s.generate(5);
    for (auto v : vec)
    {
        for (auto val : v)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}