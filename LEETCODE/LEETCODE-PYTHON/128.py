# 128. Longest Consecutive Sequence
# https://leetcode.com/problems/longest-consecutive-sequence/description/

# Method-1 brute force (TC-o(n^3))
class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        max_length=0

        for n in nums:
            curr_n=n
            curr_length=1

            while curr_n+1 in nums:
                curr_n+=1
                curr_length+=1

            max_length=max(max_length,curr_length)

        return max_length

# Method-2 sorting (TC-o(nlogn))
class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        n=len(nums)

        if n==0:
            return 0

        nums.sort()
        curr_smallest=nums[0]
        temp_len=1
        res=1

        for i in range(1,n):
            if nums[i]==curr_smallest:
                continue
            
            if nums[i]==curr_smallest+1:
                temp_len+=1
            else:
                temp_len=1
            
            curr_smallest=nums[i]
            res=max(res,temp_len)

        return res

# Method-3 using set (TC-o(n))   
class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        max_length=0
        nums_set=set(nums)

        for n in nums_set:
            if n-1 not in nums_set:
                curr_n=n
                curr_length=1

                while curr_n+1 in nums_set:
                    curr_n+=1
                    curr_length+=1

                max_length=max(max_length,curr_length)

        return max_length