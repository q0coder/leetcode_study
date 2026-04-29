
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char, int>mpp;
        unordered_map<char, int>mps;
        for (auto v : p)
        {
            ++mpp[v];
        }
        int left = 0;

        int size = s.size();
        int len = p.size();
        int right = len - 1;
        vector<int>vec;
        for (int i = 0; i <= right; ++i)
        {
            ++mps[s[i]];
        }
        while (right < size)
        {
            if (mpp == mps)
            {
                vec.push_back(left);
            }
            if (mps[s[left]] == 1)
                mps.erase(s[left]);
            else
                --mps[s[left]];

            ++right;
            ++mps[s[right]];
            ++left;

        }
        return vec;
    }
};