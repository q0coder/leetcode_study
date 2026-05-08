#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<string> str_stack;
        stack<int> num_stack;

        string current_str = "";
        int multi = 0;

        for (char c : s) {
            if (isdigit(c)) {
                // 处理多位数，例如 "12[a]"
                multi = multi * 10 + (c - '0');
            }
            else if (c == '[') {
                // 将当前状态入栈，准备进入新的一层
                num_stack.push(multi);
                str_stack.push(current_str);
                // 重置状态
                multi = 0;
                current_str = "";
            }
            else if (c == ']') {
                // 完成一层解码，与外层拼接
                int repeat_times = num_stack.top();
                num_stack.pop();

                string prev_str = str_stack.top();
                str_stack.pop();

                // 将内层字符串重复指定次数
                string repeated_str = "";
                for (int i = 0; i < repeat_times; ++i) {
                    repeated_str += current_str;
                }
                // 与前缀字符串拼接
                current_str = prev_str + repeated_str;
            }
            else {
                // 普通字母，直接添加
                current_str += c;
            }
        }
        return current_str;
    }
};
