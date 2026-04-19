#include<iostream>
#include<vector>
using namespace std;

class Solution {
    int count = 0;
    int find(int x, int parent[])
    {
        while (x == parent[x])
        {
            return x;
        }
        return parent[x] = find(parent[x], parent);
    }
    void Union(int x, int y, int parent[])
    {
        int rootx = find(x, parent);
        int rooty = find(y, parent);
        if (rootx != rooty)
        {
            parent[rootx] = rooty;
            count--;
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {

        const int r = grid.size();
        const int c = grid[0].size();
        int parent[r * c];
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == '1')
                {
                    int index = i * c + j;
                    parent[index] = index;
                    count++;
                }

            }
        }
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == '1')
                {
                    int index = i * c + j;
                    if (i + 1 < r && grid[i + 1][j] == '1')
                    {
                        int downIndex = (i + 1) * c + j;
                        Union(index, downIndex, parent);
                    }
                    if (j + 1 < c && grid[i][j + 1] == '1')
                    {
                        int rightIndex = i * c + (j + 1);
                        Union(index, rightIndex, parent);
                    }
                }
            }
        }
        return count;
    }
};

int main()
{
	
}
