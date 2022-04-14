//1338. Reduce Array Size to The Half
//https://leetcode.com/problems/reduce-array-size-to-the-half/

//Using max-heap
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
            m[arr[i]]++;
        
        priority_queue<pair<int,int>> q;
        for(auto i:m)
            q.push(make_pair(i.second,i.first));
        
        int del=0,res=0;
        while(del<n/2){
            del+=q.top().first;
            q.pop();
            
            res++;
        }
        
        return res;
        
    }
};