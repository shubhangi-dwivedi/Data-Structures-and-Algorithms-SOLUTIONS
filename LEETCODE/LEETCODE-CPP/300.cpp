//300. Longest Increasing Subsequence
//https://leetcode.com/problems/longest-increasing-subsequence/

//Method-1 (DP) (Time complexity - O(n^2))
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        
        int lis[n];
        
        int res=0;
        lis[0]=1;
        
        for(int i=1;i<n;i++){
            lis[i]=1;
            for(int j=0;j<i;j++)
                if(nums[j]<nums[i])
                    lis[i]=max(lis[i],lis[j]+1);
        }
            
        for(int i=0;i<n;i++)
            res=max(res,lis[i]);
            
            return res;
    }
        
};