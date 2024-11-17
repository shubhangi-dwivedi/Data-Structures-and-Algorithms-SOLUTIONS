//841. Keys and Rooms
//https://leetcode.com/problems/keys-and-rooms/

//Method-1 using BFS
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        int n=rooms.size();
        vector<bool>visited(n);
        queue<int> q;
        q.push(0);
        
        while(!q.empty())
        {
            int new_k=q.front();
            q.pop();
            
            if(!visited[new_k])
            {
                visited[new_k]=true;
                for(auto key:rooms[new_k])
                    q.push(key);
            }
        }
        
        for(auto mark: visited)
            if(!mark)
                return false;
        
        return true;
    }
};


//Method-2 using DFS
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size(),count=0;
        vector<bool>vis(n,false);

        helper(rooms,0,vis);

        for(int i=0;i<n;i++){
            if(vis[i]==false){
                return false;
            }
        }

        return true;
    }

    void helper(vector<vector<int>>& rooms,int idx,vector<bool> &vis){
        if(vis[idx]==true){
            return;
        }
        vis[idx]=true;
        for(auto x: rooms[idx]){
            if(vis[x]==false){
                helper(rooms,x,vis);
            }
        }
    }
};