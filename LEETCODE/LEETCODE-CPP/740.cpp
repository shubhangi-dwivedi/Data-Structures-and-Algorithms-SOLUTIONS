//740. Delete and Earn
//https://leetcode.com/problems/delete-and-earn/

//Method-1 (dp-tabulation)
class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int max_ele=*max_element(nums.begin(), nums.end());

        int dp[20001];
        vector<int> frequency(20001);
        for(int i=0 ; i<nums.size() ; i++)
            frequency[nums[i]]++;
        
        dp[1]=frequency[1];
        dp[2]=max(dp[1],frequency[2]*2); //2*no_of_times_2_occurred
        for(int i=3 ; i<=max_ele ; i++)
            dp[i]=max(dp[i-1], dp[i-2]+frequency[i]*i);
        
        return dp[max_ele];
    }
};