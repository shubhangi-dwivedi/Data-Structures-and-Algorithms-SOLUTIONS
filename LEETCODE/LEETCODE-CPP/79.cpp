// 79. Word Search
// https://leetcode.com/problems/word-search/description/

// Method-1 using recursion & backtracking
class Solution
{
public:
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    bool exist(vector<vector<char>> &board, string word)
    {
        int n = board.size(), m = board[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        bool ans = false;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (helper(board, word, vis, n, m, i, j, 0))
                {
                    return true;
                }
            }
        }

        return false;
    }

    bool helper(vector<vector<char>> &board, string &word, vector<vector<bool>> &vis, int n, int m, int i, int j, int x)
    {
        if (x == word.length())
        {
            return true;
        }
        if (i < 0 || j < 0 || i >= n || j >= m || vis[i][j] || board[i][j] != word[x])
        {
            return false;
        }

        vis[i][j] = true;
        for (int k = 0; k < 4; k++)
        {
            if (helper(board, word, vis, n, m, i + dx[k], j + dy[k], x + 1))
            {
                return true;
            }
        }

        vis[i][j] = false;
        return false;
    }
};

// Method-2 (letter matching same as above but written differently)
class Solution
{
public:
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    bool exist(vector<vector<char>> &board, string word)
    {
        int m = board.size(), n = board[0].size(), wSize = word.length();

        vector<vector<bool>> vis(m, vector<bool>(n, false));
        bool flag = false;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string temp = "";

                if (board[i][j] == word[0])
                {
                    helper(board, word, vis, i, j, temp, m, n, 0, flag);

                    if (flag)
                    {
                        return true;
                    }

                    temp = "";
                }
            }
        }

        return false;
    }

    void helper(vector<vector<char>> &board, string word, vector<vector<bool>> &vis, int i, int j, string temp, int m, int n, int wordIdx, bool &flag)
    {
        if (i < 0 || i >= m || j < 0 || j >= n || vis[i][j] || board[i][j] != word[wordIdx] || wordIdx >= word.length())
        {
            return;
        }

        temp.push_back(word[wordIdx]);

        vis[i][j] = true;

        if (temp == word)
        {
            flag = true;
        }

        for (int k = 0; k < 4; k++)
        {
            helper(board, word, vis, i + dx[k], j + dy[k], temp, m, n, wordIdx + 1, flag);
        }

        vis[i][j] = false;
    }
};
