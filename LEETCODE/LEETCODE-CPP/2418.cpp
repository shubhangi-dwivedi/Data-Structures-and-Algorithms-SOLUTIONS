//2418. Sort the People
//https://leetcode.com/problems/sort-the-people/description/

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=heights.size();
        priority_queue<pair<int,string>> pq;

        for(int i=0;i<n;i++)
            pq.push({heights[i],names[i]});
        
        int i=0;
        while(!pq.empty()){
            names[i++]=pq.top().second;
            pq.pop();
        }

        return names;
    }
};