//857. Minimum Cost to Hire K Workers
//https://leetcode.com/problems/minimum-cost-to-hire-k-workers/

//Method-1 using sorting & heap
class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        int n=quality.size();
        vector<pair<double,int>> ratio;
        
        for(int i=0;i<n;i++){
            ratio.push_back({(double)wage[i]/quality[i], quality[i]});
        }
        
        sort(ratio.begin(),ratio.end());
        
        priority_queue<int>k_quality;
        int total_quality=0;
        double ans=DBL_MAX;
        
        for(int i=0;i<n;i++){
            total_quality+=ratio[i].second;
            k_quality.push(ratio[i].second);
            
            if(k_quality.size()>k){
                total_quality-=k_quality.top();
                k_quality.pop();
            }
            
            if(k_quality.size()==k){
                ans=min(ans,(double)total_quality*ratio[i].first);
            }
        }
        
        return ans;
    }
};