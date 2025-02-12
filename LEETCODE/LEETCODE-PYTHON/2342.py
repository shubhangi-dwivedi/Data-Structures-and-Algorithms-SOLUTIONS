#2342. Max Sum of a Pair With Equal Sum of Digits
#https://leetcode.com/problems/max-sum-of-a-pair-with-equal-sum-of-digits/description/

class Solution:
    def maximumSum(self, nums: List[int]) -> int:
        curr_sum= [-1]*82
        ans=-1

        for n in nums:
            digi_sum=sum(int(d) for d in str(n))

            if curr_sum[digi_sum] != -1:
                ans=max(ans, n+curr_sum[digi_sum])

            curr_sum[digi_sum]=max(curr_sum[digi_sum], n)

        return ans
            
            
        