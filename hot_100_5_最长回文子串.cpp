#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        int start = 0, maxLen = 1;
        int n = s.size();

        for (int i = 0; i < n; ++i) {
            // 处理奇数长度回文，中心为i
            int len1 = expandAroundCenter(s, i, i);
            // 处理偶数长度回文，中心为i和i+1
            int len2 = expandAroundCenter(s, i, i + 1);
            // 取当前两种情况的最大长度
            int currentMax = max(len1, len2);
            if (currentMax > maxLen) {
                maxLen = currentMax;
                // 计算起始位置，确保起始位置正确
                start = i - (currentMax - 1) / 2;
            }
        }
        return s.substr(start, maxLen);
    }

private:
    // 从左右中心扩散，返回回文长度
    int expandAroundCenter(const string& s, int left, int right) {
        int n = s.size();
        while (left >= 0 && right < n && s[left] == s[right]) {
            --left;
            ++right;
        }
        // 回文长度为 right - left - 1（因为循环结束时left和right已超出回文边界）
        return right - left - 1;
    }
};

int main() {
    Solution sol;
    string s;
    cin >> s;
    cout << sol.longestPalindrome(s) << endl;
    return 0;
}