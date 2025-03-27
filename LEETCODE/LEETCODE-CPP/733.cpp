// 733. Flood Fill
// https://leetcode.com/problems/flood-fill/

// Method-1 (graph iteration)
class Solution
{
public:
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        int n1 = image.size(), n2 = image[0].size(), orgColor = image[sr][sc];
        vector<vector<bool>> vis(n1, vector<bool>(n2, false));

        helper(image, vis, sr, sc, color, orgColor, n1, n2);

        return image;
    }

    void helper(vector<vector<int>> &image, vector<vector<bool>> &vis, int i, int j, int color, int orgColor, int n1, int n2)
    {
        if (i < 0 || i >= n1 || j < 0 || j >= n2 || vis[i][j] || image[i][j] != orgColor)
        {
            return;
        }

        vis[i][j] = true;

        image[i][j] = color;

        for (int k = 0; k < 4; k++)
        {
            helper(image, vis, i + dx[k], j + dy[k], color, orgColor, n1, n2);
        }
    }
};