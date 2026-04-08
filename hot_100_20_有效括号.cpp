// #include<iostream>
//#include<vector>
//#include<stack>
//#include<string>
//using namespace std;
//class Solution {
//public:
//    bool isValid(string s) {
//        stack<char>stk;
//
//        if (s.length() == 1 || s[0] == ')' || s[0] == ']' || s[0] == '}')
//        {
//            return false;
//        }
//        for (auto ch : s)
//        {
//            if (ch == '(' || ch == '[' || ch == '{')
//            {
//                stk.push(ch);
//            }
//            else if (!stk.empty())
//            {
//                if (stk.top() == '(' && ch == ')' || stk.top() == '[' && ch == ']' || stk.top() == '{' && ch == '}')
//                {
//                    stk.pop();
//
//                }
//                else
//                {
//                    return false;
//                }
//            }
//            else
//            {
//                return false;
//            }
//        }
//        if (stk.empty())
//        {
//            return true;
//
//        }
//        else
//        {
//            return false;
//        }
//    }
//};