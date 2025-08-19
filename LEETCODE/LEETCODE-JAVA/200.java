// 200. Number of Islands
// https://leetcode.com/problems/number-of-islands/description/

// Method - 1 using dfs
class Solution {
    int[] dx = {-1, 1, 0, 0};
    int[] dy = {0, 0, 1, -1};

    public int numIslands(char[][] grid) {
        int n = grid.length;
        int m = grid[0].length;
        int count = 0;
        boolean[][] vis = new boolean[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && grid[i][j] == '1') {
                    dfs(grid, vis, n, m, i, j);
                    count++;
                }
            }
        }
        
        return count;
    }

    private void dfs(char[][] grid, boolean[][] vis, int n, int m, int i, int j) {
        if (i < 0 || j < 0 || i >= n || j >= m || vis[i][j] || grid[i][j] == '0') {
            return;
        }
        
        vis[i][j] = true;
        
        for (int k = 0; k < 4; k++) {
            dfs(grid, vis, n, m, i + dx[k], j + dy[k]);
        }
    }
}