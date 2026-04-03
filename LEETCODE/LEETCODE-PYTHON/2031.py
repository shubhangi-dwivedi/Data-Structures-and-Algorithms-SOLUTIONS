# 2031. Count Subarrays With More Ones Than Zeros
# https://leetcode.com/problems/count-subarrays-with-more-ones-than-zeros/

# Method-1 Brute force (TC-O(n^2))
class Solution:
    def subarraysWithMoreOnesThanZeroes(self, nums: List[int]) -> int:
        n=len(nums)
        ans=0
        MOD=10**9+7

        for i in range(n):
            count=0
            for j in range(i,n):
                if nums[j]==1:
                    count+=1
                else:
                    count-=1

                if count>0:
                    ans+=1
        
        return ans%MOD