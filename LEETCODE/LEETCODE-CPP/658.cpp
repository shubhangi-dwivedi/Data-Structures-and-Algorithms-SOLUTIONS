//658. Find K Closest Elements
//https://leetcode.com/problems/find-k-closest-elements/

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>ans(k);
        priority_queue<pair<int,int>>pq;
        
        for(int i=0;i<arr.size();i++){
            pq.push({abs(x-arr[i]),arr[i]});
            if(pq.size()>k)
                pq.pop();
        }
        while(!pq.empty()){
            ans[k-1]=pq.top().second;
            pq.pop();
            k--;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};