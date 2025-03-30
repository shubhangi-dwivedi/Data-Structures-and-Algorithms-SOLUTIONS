// 212. Word Search II
// https://leetcode.com/problems/word-search-ii/

// Method-1 (TLE)
class Solution
{
public:
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    vector<string> findWords(vector<vector<char>> &board, vector<string> &words)
    {
        int m = board.size(), n = board[0].size(), wSize = words.size();

        bool flag = false;

        set<string> ans;

        for (int x = 0; x < wSize; x++)
        {
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    string temp = "";

                    string word = words[x];
                    if (board[i][j] == word[0])
                    {
                        vector<vector<bool>> vis(m, vector<bool>(n, false));
                        if (helper(board, word, vis, i, j, temp, m, n, 0, ans))
                        {
                            break;
                            x++;
                        }
                    }
                }
            }
        }

        vector<string> res;
        res = {ans.begin(), ans.end()};
        return res;
    }

    bool helper(vector<vector<char>> &board, string word, vector<vector<bool>> &vis, int i, int j, string temp, int m, int n, int wordIdx, set<string> &ans)
    {
        if (wordIdx == word.length())
        {
            ans.insert(word);
            return true;
        }

        if (i < 0 || i >= m || j < 0 || j >= n || vis[i][j] || board[i][j] != word[wordIdx])
        {
            return false;
            ;
        }

        vis[i][j] = true;

        for (int k = 0; k < 4; k++)
        {
            if (helper(board, word, vis, i + dx[k], j + dy[k], temp, m, n, wordIdx + 1, ans))
            {
                return true;
            }
        }

        vis[i][j] = false;
        return false;
    }
};