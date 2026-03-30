# 55. Jump Game
# https://leetcode.com/problems/jump-game/

# Method-1
class Solution:
    def canJump(self, nums: List[int]) -> bool:
        n=len(nums)
        end=n-1

        for i in range(n-2,-1,-1):
            if nums[i]+i>=end:
                end=i

        if end==0:
            return True
        
        return False
