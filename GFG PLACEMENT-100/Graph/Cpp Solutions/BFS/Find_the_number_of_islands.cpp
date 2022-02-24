//Find the number of islands 
//https://practice.geeksforgeeks.org/problems/find-the-number-of-islands/1/#

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int m=grid.size(), n=grid[0].size();
        int count=0;
        int dir[8][2]={{0,1},{1,0},{-1,0},{0,-1},{1,1},{-1,-1},{1,-1},{-1,1}};
        
        queue<pair<int,int>>q;
        
        //BFS
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    count++;
                    q.push({i,j});
                    
                    grid[i][j]='2';
                    while(!q.empty()){
                        pair<int,int> p;
                        p=q.front();
                        q.pop();
                        for(int x=0;x<8;x++){
                            int r=dir[x][0]+p.first;
                            int c=dir[x][1]+p.second;
                            
                            if(r>=0 && r<m &&c>=0 && c<n && grid[r][c]=='1'){
                                q.push({r,c});
                                grid[r][c]='2';
                            }
                            
                        }
                    }
                }
            }
        }
        
        return count;
    }
    
    //int BFS()
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends