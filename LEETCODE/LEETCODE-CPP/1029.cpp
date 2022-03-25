//1029. Two City Scheduling
//https://leetcode.com/problems/two-city-scheduling/

//Method-1 (Greedy approach)
class Solution {
public:

    //if a[1]-a[0] is greater than b[1]-b[0]..then a come above candidate b 
    static bool cmp(vector<int>&a, vector<int>&b){
        return (a[1]-a[0]) > (b[1]-b[0]);   //(a[1]-a[0] = profit for candidate a)  (b[1]-b[0] = profit for candidate b)
    }
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n=costs.size(),res=0;
        
        sort(costs.begin(),costs.end(), cmp);   //sorting on the bases of profit (cost[i][1]-cost[i][0])

        //after sorting first n/2 elements will be having cost for reaching city a less
        //next n/2 will be having cost of reaching city b less than a     

        for(int i=0;i<n;i++){
            if(i<n/2)   //adding first n/2 values i.e. city a value for ith person
                res+=costs[i][0];
            else        //adding last n/2 values i.e. city b value for ith person 
                res+=costs[i][1];
        }
        
        return res;
    }
};