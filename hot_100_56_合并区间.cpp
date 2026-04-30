#define _CRT_SECURE_NO_WARNINGS
bool operator<(vector<int>vec1, vector<int>vec2)
{
    return vec1[0] < vec2[0];
}
class Solution {

public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.size() == 1)
        {
            return intervals;
        }
        int size = intervals.size();
        vector<vector<int>>vec; sort(intervals.begin(), intervals.end());
        for (int i = 0; i < size; ++i)
        {
            if (i == size - 1)
            {
                vec.push_back(intervals[i]);
                break;
            }

            if (intervals[i][1] >= intervals[i + 1][0])
            {
                intervals[i + 1] = { intervals[i][0],max(intervals[i][1],intervals[i + 1][1]) };
            }
            else
            {
                vec.push_back(intervals[i]);
            }
        }
        return vec;
    }
};