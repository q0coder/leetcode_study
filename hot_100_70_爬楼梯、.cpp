//#include<iostream>
//#include<vector>
//#include<stack>
//#include<string>
//using namespace std;
////递归实现
//class Solution {
//public:
//    int climbStairs(int n) 
// {
//
//        int dp[46] = { 0 };
//        return climbStairs(n, dp);
//
//
//    }
//    int climbStairs(int n, int dp[]) {
//        if (dp[n] > 0) {
//            return dp[n];
//        }
//        if (n == 1) {
//            dp[n] = 1;
//            return dp[n];
//
//        }
//        else if (n == 2) {
//            dp[n] = 2;
//            return dp[n];
//        }
//
//        int n1 = climbStairs(n - 1, dp);
//        int n2 = climbStairs(n - 2, dp);
//        dp[n] = n1 + n2;
//        return dp[n];
//    }
//};
////非递归实现
//class Solution {
//public:
//    int climbStairs(int n) {
//
//        int dp[46] = { 0 };
//        dp[1] = 1;
//        dp[2] = 2;
//        for (int i = 3; i <= n; i++)
//        {
//            dp[i] = dp[i - 1] + dp[i - 2];
//        }
//        return dp[n];
//
//
//    }
//
//};
//
//int main()
//{
//
//}