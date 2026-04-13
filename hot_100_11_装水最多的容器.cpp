#include<iostream>
#include<vector>
using namespace std;

class Solution {

public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int  max = 0;
        while (i < j)
        {
            int area = min(height[i], height[j]) * (j - i);

            if (max < area)
            {
                max = area;
            }
            if (height[i] < height[j])
            {
                i++;
            }
            else
            {
                j--;
            }

        }
        return max;
    }

};


int main()
{
    vector<int>vec{ 8,7,2,1 };
    Solution s;
    cout<<s.maxArea(vec)<<endl;
    return 0;
}