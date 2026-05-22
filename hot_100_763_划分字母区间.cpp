class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> result;
        int last_pos[26] = {0}; // 记录每个小写字母最后一次出现的下标
        
        // 1. 预处理：遍历一次字符串，记录每个字符的最后位置
        for (int i = 0; i < s.size(); ++i) {
            last_pos[s[i] - 'a'] = i;
        }

        int start = 0; // 当前片段的起点
        int end = 0;   // 当前片段的最远边界
        
        // 2. 贪心切分：再次遍历字符串
        for (int i = 0; i < s.size(); ++i) {
            // 动态扩展当前片段的最远边界
            end = max(end, last_pos[s[i] - 'a']);
            
            // 走到当前片段的最远边界，说明可以切分了
            if (i == end) {
                result.push_back(end - start + 1); // 记录片段长度
                start = i + 1; // 设定下一个片段的起点
            }
        }
        return result;
    }
};