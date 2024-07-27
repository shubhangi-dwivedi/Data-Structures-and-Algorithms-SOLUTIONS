//2418. Sort the People
//https://leetcode.com/problems/sort-the-people/description/

//method-1 using sorting
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=heights.size();
        vector<pair<int,string>> temp;

        for(int i=0;i<n;i++)
            temp.push_back({heights[i],names[i]});

        sort(temp.rbegin(), temp.rend());

        for(int i=0;i<n;i++)
            names[i]=temp[i].second;

        return names;
    }
};


//Methos-2 using priority queue (optimized)
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