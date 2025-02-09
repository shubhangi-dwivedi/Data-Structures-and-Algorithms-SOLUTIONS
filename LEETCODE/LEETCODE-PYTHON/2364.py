#2364. Count Number of Bad Pairs
#https://leetcode.com/problems/count-number-of-bad-pairs/description/

#Method-1 using brute force
class Solution:
    def countBadPairs(self, nums: List[int]) -> int:
        badPairs=0
        n=len(nums)

        for i in range(0,n-1):
            for j in range(i+1,n):
                if j-i != nums[j]-nums[i]:
                    badPairs+=1

        return badPairs
    
#Methos-2 using dict/map
class Solution:
    def countBadPairs(self, nums: List[int]) -> int:
        freq={}
        goodPairs=0
        n=len(nums)

        for i in range(0,n):
            temp=nums[i]-i
            goodPairs+=freq.get(temp,0)
            freq[temp]=freq.get(temp,0)+1

        return (n*(n-1))//2 - goodPairs