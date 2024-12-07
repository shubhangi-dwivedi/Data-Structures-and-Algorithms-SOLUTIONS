//163. Missing Ranges
//https://leetcode.com/problems/missing-ranges/

//Method-1
class Solution {
public:
    vector<vector<int>> findMissingRanges(vector<int>& nums, int lower, int upper) {
        int n=nums.size();
        vector<vector<int>> ans;
        
        if(n==0){
            ans.push_back({lower,upper});
            return ans;
        }
        
        
        for(int i=0;i<n;i++){
            if( i==0 && lower<nums[i]){
                ans.push_back({lower,nums[i]-1});
            }
            
            if( i!=0 && nums[i]!=nums[i-1]+1 && (nums[i]>=lower && nums[i]<=upper)){
                int l_bound=max(nums[i-1]+1,lower);
                int u_bound=min(nums[i]-1,upper);
                ans.push_back({l_bound, u_bound});
            }

            if(i==n-1 && nums[i]<upper){
                ans.push_back({nums[i]+1, upper});
            }
        }
        return ans;
    }
};