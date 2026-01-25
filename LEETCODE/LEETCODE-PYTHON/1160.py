# 1160. Find Words That Can Be Formed by Characters
# https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/description

#Method-1 brute force
class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
        chars_freq =defaultdict(int)
        count=0

        for i in chars:
            chars_freq[i]+=1

        for x in words:
            word_chars_freq=defaultdict(int)
            flag=True
            for i in x:
                if i not in chars_freq:
                    flag=False
                    break
                word_chars_freq[i]+=1
                if word_chars_freq[i] > chars_freq[i]:
                    flag=False
                    
            if flag==True:
                count+=len(x)

        return count
