#include<iostream>
using namespace std;
#include<vector>


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool rb = true;
        bool cb = true;
        for (int r = 0; r < matrix[0].size(); r++)
        {
            if (matrix[0][r] == 0)
            {
                rb = false;
                break;
            }
        }
        for (int c = 0; c < matrix.size(); c++)
        {
            if (matrix[c][0] == 0)
            {
                cb = false;
                break;
            }
        }
        for (int i = 1; i < matrix.size(); i++)
        {
            for (int j = 1; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }

            }
        }
        for (int i = 1; i < matrix.size(); i++)
        {
            for (int j = 1; j < matrix[0].size(); j++)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }

            }
        }
        for (int r = 0; r < matrix[0].size(); r++)
        {
            if (!rb)
            {
                matrix[0][r] = 0;
            }
        }
        for (int c = 0; c < matrix.size(); c++)
        {
            if (!cb)
            {
                matrix[c][0] = 0;
            }
        }


    }
};

int main()
{
    vector<vector<int>>vec{ {0,1,2,0} ,{3,4,5,2},{1,3,1,5} };
    Solution s;
    s.setZeroes(vec);
}