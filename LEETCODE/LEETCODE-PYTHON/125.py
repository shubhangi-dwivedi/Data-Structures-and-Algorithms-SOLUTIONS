# 125. Valid Palindrome
# https://leetcode.com/problems/valid-palindrome/description/

# method-1 using reverse string (TC-O(n))
class Solution:
    def isPalindrome(self, s: str) -> bool:
        filtered_chars=filter(lambda ch:ch.isalnum(),s)
        lowercase_filtered_chars=map(lambda ch:ch.lower(), filtered_chars)

        filterd_chars_list=list(lowercase_filtered_chars)
        reversed_chars_list=filterd_chars_list[::-1]

        return filterd_chars_list==reversed_chars_list

# method-2 using Two pointers (TC-o(n))
class Solution:
    def isPalindrome(self, s: str) -> bool:
        i=0
        j=len(s)-1

        while i<j:
            while i<j and not s[i].isalnum():
                i+=1
            while i<j and not s[j].isalnum():
                j-=1
            
            if s[i].lower()!=s[j].lower():
                return False

            i+=1
            j-=1
            
        return True

