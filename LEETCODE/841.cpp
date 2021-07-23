//841. Keys and Rooms

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