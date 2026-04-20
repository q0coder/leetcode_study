#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix[0].size();
        int s = matrix.size() * r;
        int left = 0;
        int right = s - 1;
        while (left <= right)
        {
            int mid = left + ((right - left) >> 1);
            int rmid = mid / (r);
            int cmid = mid % (r);


            if (target == matrix[rmid][cmid])
            {
                return true;
            }
            else if (target > matrix[rmid][cmid])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;

            }

        }
        return false;
    }
};

