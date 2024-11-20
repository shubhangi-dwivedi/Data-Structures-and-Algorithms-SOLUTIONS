//56. Merge Intervals
//https://leetcode.com/problems/merge-intervals/

//Method-1 (array & sorting)
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();

        if(n==1){
            return intervals;
        }

        sort(intervals.begin(),intervals.end());

        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=ans[ans.size()-1][1]){
                ans[ans.size()-1][1]=max(ans[ans.size()-1][1],intervals[i][1]);
            }
            else{
                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
};

