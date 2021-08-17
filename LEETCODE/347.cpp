//347. Top K Frequent Elements

//using maxheap
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n=nums.size();
        unordered_map<int,int> m;
        priority_queue<pair<int,int>> q; 
        vector<pair<int,int>>v;
        
        for(int i=0;i<n;i++)
            m[nums[i]]++;
        
        for(auto i:m)
            v.push_back({i.second,i.first});
        
        int x=0;
        for(int i=0;i<v.size();i++){
            if(x<k)
                q.push({v[i].first,v[i].second});
            
            else{
                if(v[i].first>q.top().first){
                    q.push({v[i].first,v[i].second});
                    q.pop();
                }
            }
        }
        
        vector<int>res;
        int i=0;
        while(i<k){
            res.push_back(q.top().second);
            q.pop();
            i++;
        }
        return res;
    }
};