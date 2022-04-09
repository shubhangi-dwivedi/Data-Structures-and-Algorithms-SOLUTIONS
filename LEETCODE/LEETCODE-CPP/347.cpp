//347. Top K Frequent Elements
//https://leetcode.com/problems/top-k-frequent-elements/

//using maxheap
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        
        priority_queue<pair<int,int>> q;
        
        for(auto i : m){
            q.push({i.second,i.first});
        }
        
        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(q.top().second);
            q.pop();
        }
        
        return res;
        
    }
};