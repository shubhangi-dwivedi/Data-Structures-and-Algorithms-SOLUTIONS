# 238. Product of Array Except Self
# https://leetcode.com/problems/product-of-array-except-self/description/

# Method-1 using prefix sum
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n=len(nums)
        suffix,prefix,res=[0]*n,[0]*n,[0]*n
        prefix[0]=1
        suffix[n-1]=1
        for i in range (1,n):
            prefix[i]=prefix[i-1]*nums[i-1]
            suffix[n-i-1]=suffix[n-i]*nums[n-i]

        for i in range (n):
            res[i]=prefix[i]*suffix[i]

        return res
