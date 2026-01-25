# 383. Ransom Note
# https://leetcode.com/problems/ransom-note/description/

# Method -1 brute force
class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        freq=defaultdict(int)

        for i in magazine:
            freq[i]+=1
        
        for x in ransomNote:
            if x in freq and freq[x]!=0:
                freq[x]-=1
            else:
                return False
        
        return True
        