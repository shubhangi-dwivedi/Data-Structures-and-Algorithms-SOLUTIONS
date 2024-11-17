//547. Number of Provinces
//https://leetcode.com/problems/number-of-provinces/description/

//Method-1 using DFS
class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size(), count=0;
        vector<bool>visited(n,false);

        for(int i=0;i<n;i++){
            if(visited[i]==false){
                visited[i]=true;
                count++;
                helper(isConnected,visited,i,n);
            }
        }

        return count;
    }

    void helper(vector<vector<int>>& isConnected, vector<bool>& visited, int curr, int n){
        for(int i=0;i<n;i++){
            if(visited[i]==false && isConnected[curr][i]==1){
                visited[i]=true;
                helper(isConnected,visited,i,n);
            }
        }
    }
};