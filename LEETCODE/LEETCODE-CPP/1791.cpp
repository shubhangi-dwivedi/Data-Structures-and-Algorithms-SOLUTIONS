// 1791. Find Center of Star Graph
// https://leetcode.com/problems/find-center-of-star-graph/description/

// using unordered map
class Solution
{
public:
    int findCenter(vector<vector<int>> &edges)
    {
        unordered_map<int, int> m;

        int n1 = edges.size();
        for (int i = 0; i < n1; i++)
        {
            m[edges[i][0]]++;
            m[edges[i][1]]++;
        }

        for (auto i : m)
            if (i.second == n1)
                return i.first;

        return -1;
    }
};

// using array
class Solution
{
public:
    int findCenter(vector<vector<int>> &edges)
    {
        int n = edges.size();
        vector<int> degree(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            degree[edges[i][0] - 1]++;
            degree[edges[i][1] - 1]++;
        }

        for (int i = 0; i < n + 1; i++)
        {
            if (degree[i] == n)
            {
                return i + 1;
            }
        }

        return -1;
    }
};