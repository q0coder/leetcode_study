#define _CRT_SECURE_NO_WARNINGS
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> answer(n, 0); // 初始化结果数组，默认为0
        stack<int> st;            // 单调栈，存储温度的索引

        for (int i = 0; i < n; i++) {
            // 当前温度大于栈顶索引对应的温度时，说明找到了更高温
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int prev_index = st.top();      // 取出栈顶的索引（之前的某天）
                st.pop();                       // 弹出栈顶
                answer[prev_index] = i - prev_index; // 计算天数差
            }
            // 将当前索引入栈
            st.push(i);
        }
        return answer;
    }
};