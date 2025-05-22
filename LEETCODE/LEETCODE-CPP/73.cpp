// 73. Set Matrix Zeroes
// https://leetcode.com/problems/set-matrix-zeroes/description/

// Method-1 brute force [Time Complexity : O((N*M)*(N+M)), Space Complexity : O(N*M)]
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> vis = matrix;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    for (int k = 0; k < m; k++)
                    {
                        vis[i][k] = 0;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    for (int k = 0; k < n; k++)
                    {
                        vis[k][j] = 0;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (vis[i][j] == 0)
                {
                    matrix[i][j] = vis[i][j];
                }
            }
        }
    }
};

// Method-2 using sets [Time Complexity : O((N*M)), Space Complexity : O(N+M)]
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int n = matrix.size(), m = matrix[0].size();
        unordered_set<int> zeroRow;
        unordered_set<int> zeroCol;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    zeroRow.insert(i);
                    zeroCol.insert(j);
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (zeroRow.count(i) > 0 || zeroCol.count(j) > 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

// Method-3 using no extra space place(in-place) [Time Complexity : O((N*M)), Space Complexity : O(1)]
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int n = matrix.size(), m = matrix[0].size();
        bool flag1 = false, flag2 = false;

        for (int i = 0; i < n; i++)
        {
            if (matrix[i][0] == 0)
            {
                flag1 = true;
            }
        }

        for (int j = 0; j < m; j++)
        {
            if (matrix[0][j] == 0)
            {
                flag2 = true;
            }
        }

        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }

        if (flag1 == true)
        {
            for (int i = 0; i < n; i++)
            {
                matrix[i][0] = 0;
            }
        }

        if (flag2 == true)
        {
            for (int j = 0; j < m; j++)
            {
                matrix[0][j] = 0;
            }
        }
    }
};

// Method-4 using extra place(in-place) [Time Complexity : O((N*M)), Space Complexity : O(M)]
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int m = matrix.size(), n = matrix[0].size();
        vector<pair<int, int>> zeroAt;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    zeroAt.push_back({i, j});
                }
            }
        }

        for (int i = 0; i < zeroAt.size(); i++)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[zeroAt[i].first][j] = 0;
            }

            for (int k = 0; k < m; k++)
            {
                matrix[k][zeroAt[i].second] = 0;
            }
        }
    }
};