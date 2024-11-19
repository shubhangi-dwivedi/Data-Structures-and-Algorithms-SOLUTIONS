//79. Word Search
//https://leetcode.com/problems/word-search/description/

//Method-1 using recursion & backtracking
class Solution {
public:
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};

    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(),m=board[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m,false));
        bool ans=false;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(helper(board,word,vis,n,m,i,j,0)){
                    return true;
                }
            }
        }

        return false;
    }

    bool helper(vector<vector<char>>& board, string &word, vector<vector<bool>>& vis, int n, int m, int i, int j, int x){
        if(x==word.length()){
            return true;
        }
        if(i<0 || j<0 || i>=n || j>=m || vis[i][j] || board[i][j]!=word[x]){
            return false;
        }

        vis[i][j]=true;
        for(int k=0;k<4;k++){
            if(helper(board,word,vis,n,m,i+dx[k],j+dy[k],x+1)){
                return true;
            }
            
        }
        
        vis[i][j]=false;
        return false;
    }
};