//695. Max Area of Island
//https://leetcode.com/problems/max-area-of-island/description/

class Solution {
public:
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n1=grid.size(), n2=grid[0].size(), maxArea=0;

        vector<vector<bool>>visited(n1, vector<bool>(n2,false));

        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(grid[i][j]==1 && !visited[i][j]){
                    maxArea=max(maxArea, helper(grid,n1,n2,i,j,visited));
                }
            }
        }

        return maxArea;
    }

    int helper(vector<vector<int>>& grid, int n1, int n2, int i, int j, vector<vector<bool>>& visited){
        if(i<0 || j<0 || i>=n1 || j>=n2 || grid[i][j]==0 || visited[i][j])
            return 0;

        visited[i][j]=true;
        int area=1;
        for(int k=0;k<4;k++){
            area+=helper(grid,n1,n2,dx[k]+i,dy[k]+j,visited);
        }

        return area;
    }
};