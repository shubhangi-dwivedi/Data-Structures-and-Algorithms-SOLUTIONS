//2285. Maximum Total Importance of Roads
//https://leetcode.com/problems/maximum-total-importance-of-roads/

class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        long long k = roads.size(), ans = 0;
        vector<long long>degrees(n,0);

        for(long long i=0;i<k;i++){
            degrees[roads[i][0]]++;            
            degrees[roads[i][1]]++;
        }

        sort(degrees.begin(),degrees.end());

        long long m = 1;
        
        for(long long x:degrees){
            ans+=(m*x);
            m++;
        }

        return ans;
    }
};