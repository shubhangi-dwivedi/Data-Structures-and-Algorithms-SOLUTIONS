//994. Rotting Oranges
//https://leetcode.com/problems/rotting-oranges/

//Method-1 using BFS (as it is level order traversal)
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n1=grid.size(), n2=grid[0].size(),t_count=0;
        vector<vector<int>> visited(n1,vector<int>(n2,0));
        
        queue<pair<pair<int,int>, int>>q;

        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(grid[i][j]==2){
                    visited[i][j]=2;
                    q.push({{i,j},0});
                }
            }
        }

        int dx[4]={-1,1,0,0};
        int dy[4]={0,0,-1,1};
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;

            t_count=max(t_count, t);
            q.pop();

            for(int i=0;i<4;i++){
                int i_row=r+dx[i], i_col=c+dy[i];

                if(i_row>=0 && i_col>=0 && i_row<n1 && i_col<n2 && visited[i_row][i_col]!=2 && grid[i_row][i_col]==1){
                    q.push({{i_row,i_col},t+1});
                    visited[i_row][i_col]=2;
                }

            }

        }

        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(visited[i][j]!=2 && grid[i][j]==1)
                    return -1;
            }
        }

        return t_count;
    }
};