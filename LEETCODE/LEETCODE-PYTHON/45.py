# 45. Jump Game II
# https://leetcode.com/problems/jump-game-ii/description/

# Method-1 using greedy
class Solution:
    def jump(self, nums: List[int]) -> int:
        n, ans= len(nums),0
        curr_end, curr_far=0,0

        for i in range(0,n-1):
            if curr_end>=n-1:
                break

            curr_far=max(curr_far,i+nums[i])

            if i==curr_end:
                ans+=1
                curr_end=curr_far

        return ans