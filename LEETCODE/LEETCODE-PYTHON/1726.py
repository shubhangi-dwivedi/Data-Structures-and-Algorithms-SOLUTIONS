#1726. Tuple with Same Product
#https://leetcode.com/problems/tuple-with-same-product/description/

class Solution(object):
    def tupleSameProduct(self, nums):
        n=len(nums)
        ans=0

        dict=defaultdict(int)

        for i in range(0,n-1):
            for j in range(i+1,n):
                temp= nums[i]*nums[j]

                ans+=8*dict[temp]

                dict[temp]+=1

        return ans
        