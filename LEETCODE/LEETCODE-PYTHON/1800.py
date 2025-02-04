#1800. Maximum Ascending Subarray Sum
#https://leetcode.com/problems/maximum-ascending-subarray-sum/description/

class Solution(object):
    def maxAscendingSum(self, nums):
        n=len(nums)

        prev=nums[0]
        currSum=nums[0]
        res=nums[0]
        for i in range(1,n):
            if nums[i] > prev:
                currSum+=nums[i]
            else:
                currSum=nums[i]

            res=max(res,currSum)
            prev=nums[i]

        return res


        