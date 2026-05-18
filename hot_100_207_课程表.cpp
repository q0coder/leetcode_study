#define _CRT_SECURE_NO_WARNINGS
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>graph(numCourses);
        vector<int>inDegree(numCourses, 0);
        int count = 0;
        queue<int>que;
        for (auto& pair : prerequisites)
        {
            graph[pair[0]].push_back(pair[1]);
            ++inDegree[pair[1]];
        }

        for (int i = 0; i < numCourses; ++i)
        {
            if (inDegree[i] == 0)
            {
                que.push(i);
            }
        }
        while (!que.empty())
        {
            int u = que.front();
            if (graph[u].size() != 0)
            {
                for (auto& v : graph[u])
                {
                    --inDegree[v];
                    if (inDegree[v] == 0)
                        que.push(v);
                }
            }
            que.pop();
            count++;
        }
        return count == numCourses;

    }
};