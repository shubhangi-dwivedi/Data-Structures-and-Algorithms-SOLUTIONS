//1800. Maximum Ascending Subarray Sum
//https://leetcode.com/problems/maximum-ascending-subarray-sum/description/

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();

        int prev=nums[0];
        int currSum=nums[0], res=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>prev){
                currSum+=nums[i];
            }
            else{
                currSum=nums[i];
            }

            res=max(res,currSum);
            prev=nums[i];
        }

        return res;
    }
};