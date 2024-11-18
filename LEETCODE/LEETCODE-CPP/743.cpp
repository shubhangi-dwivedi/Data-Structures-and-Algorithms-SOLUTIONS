//743. Network Delay Time
//https://leetcode.com/problems/network-delay-time/description/

//Method-1 Using Dijkstra's algo
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>> adj[n+1];

        for(auto it:times){
            adj[it[0]].push_back({it[1],it[2]});
        }

        vector<int> dist(n+1,INT_MAX);
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>>pq;

        dist[k]=0;
        pq.push({0,k});

        while(!pq.empty()){
            int dis=pq.top().first;
            int node=pq.top().second;

            pq.pop();

            for(auto it:adj[node]){
                int adjNode=it.first;
                int edgeW=it.second;

                if(dis+edgeW < dist[adjNode]){
                    dist[adjNode ]= dis+edgeW;
                    pq.push({dis+edgeW,adjNode});
                }
            }
        }

        int minDelay=0;
        for(int i=1;i<=n;i++){
            if(dist[i]==INT_MAX){
                return -1;
            }
            minDelay= max(minDelay,dist[i]);
        }

        return minDelay;
    }
};