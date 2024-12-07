//347. Top K Frequent Elements
//https://leetcode.com/problems/top-k-frequent-elements/

//Method-1 using maxheap
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

//Method-2 using heap(clear code)
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        for(auto x:mp){
            pq.push({x.second,x.first});
            mp.erase(x.first);

            if(pq.size() == k) break;
        }
        
        for(auto x:mp){
            if(pq.top().first < x.second) {
                pq.pop();
                pq.push({x.second,x.first});
            }
        }
        vector<int>ans;
        while(pq.size()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};