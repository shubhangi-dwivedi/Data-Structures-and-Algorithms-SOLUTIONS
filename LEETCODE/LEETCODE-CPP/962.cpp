//962. Maximum Width Ramp
//https://leetcode.com/problems/maximum-width-ramp/description/

//Method-1 (using vector pair)
class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n=nums.size(), res=0;
        
        vector<pair<int,int>> temp;

        for(int i=0;i<n;i++)
            temp.push_back({nums[i],i});

        sort(temp.begin(), temp.end());

        int minIdx=temp[0].second;

        for(int i=1;i<n;i++){
            res=max(res, temp[i].second-minIdx);

            minIdx=min(minIdx, temp[i].second);
        }

        return res;
    }
};