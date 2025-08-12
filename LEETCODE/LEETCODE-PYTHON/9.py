# 9. Palindrome Number
# https://leetcode.com/problems/palindrome-number/

class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x<0:
            return False
            
        n=x
        rev=0

        while n:
            rem=n%10
            n=n//10

            rev=rev*10+rem

        if x==rev:
            return True

        return False