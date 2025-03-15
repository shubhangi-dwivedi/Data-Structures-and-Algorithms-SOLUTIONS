#15. 3Sum
#https://leetcode.com/problems/3sum/

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res = []
        nums.sort()

        for i in range(len(nums)-2):
            if i>0 and nums[i]==nums[i-1]:
                continue

            j=i+1
            k=len(nums)-1

            while j<k:
                sum=nums[i]+nums[j]+nums[k]

                if sum==0:
                    #append in list
                    res.append([nums[i], nums[j], nums[k]])
                    j+=1

                    while nums[j]==nums[j-1] and j<k:
                        j+=1

                elif sum<0:
                    j+=1
                else:
                    k-=1
        
        return res