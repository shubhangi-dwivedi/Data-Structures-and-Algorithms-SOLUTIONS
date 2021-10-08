//200. Number of Islands

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size(), n=grid[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        int components=0;
        
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                if(vis[i][j]==0 && grid[i][j]=='1')
                {
                    components++;
                    dfs(grid,vis,i,j);
                }
            }
        return components;
    }
    
    void dfs(vector<vector<char>> &grid, vector<vector<int>> &vis, int i, int j)
    {
        int m=grid.size(), n=grid[0].size();
        
        vis[i][j]=1;
        
        vector<int> dx={0,1,0,-1};
        vector<int> dy={1,0,-1,0};
        
        for(int k=0;k<4;k++)
        {
            int nbr_i=i+dx[k], nbr_j=j+dy[k];
            
            if(nbr_i>=0 && nbr_i<m && nbr_j>=0 && nbr_j<n && vis[nbr_i][nbr_j]==0 && grid[nbr_i][nbr_j]=='1')
                dfs(grid,vis,nbr_i,nbr_j);
            }
    }
};