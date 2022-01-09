//909. Snakes and Ladders

//using BFS

class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        
        int n=board.size();
        vector<int>moves;
        
        int flag=0;
        for(int i=n-1;i>=0;i--){
            if(flag==0){
                for(int j=0;j<n;j++)
                    moves.push_back(board[i][j]);
                flag=1;
            }
            else{
                for(int j=n-1;j>=0;j--)
                    moves.push_back(board[i][j]);
                flag=0;
            }
        }
        
        vector<bool> visited((n*n),false);
        queue<pair<int,int>>q;
        
        q.push({0,0});
        visited[0]=true;
        
        while(!q.empty()){
            int x=q.front().first;
            int count=q.front().second;
            
            int temp_count=0;
            if(x==n*n-1)
                return count;
            
            q.pop();
            for(int y=x+1;y<=x+6 && y<n*n;y++ ){
                if(!visited[y]){
                    temp_count=count+1;
                    visited[y]=true;
                    
                    if(moves[y]!=-1)
                        q.push({moves[y]-1,temp_count});
                    else
                        q.push({y,temp_count});
                        
                }
            }
        }
        return -1;
    }
};