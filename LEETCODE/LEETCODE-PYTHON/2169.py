# 2169. Count Operations to Obtain Zero
# https://leetcode.com/problems/count-operations-to-obtain-zero

# Method-1 brute force
class Solution:
    def countOperations(self, num1: int, num2: int) -> int:
        count=0

        if num1==0 or num2==0:
            return 0
            
        if num1==num2:
            return 1

        while num1!=0 or num2!=0 :
            count+=1

            if num1>num2:
                num1-=num2
            else:
                num2-=num1

            if num1==num2 and num1!=0:
                return count+1

        return count