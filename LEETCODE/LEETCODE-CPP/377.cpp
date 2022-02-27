//377. Combination Sum IV
//https://leetcode.com/problems/combination-sum-iv/

//Method-1 (dp-tabulation)
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        int n=nums.size();
        unsigned long long dp[target+1];
        
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        
        for(int i=1;i<target+1;i++){
            for(int j=0;j<n;j++){
                if(nums[j]<=i)
                    dp[i]+=dp[i-nums[j]];
            }
        }
        return dp[target];
    }
};