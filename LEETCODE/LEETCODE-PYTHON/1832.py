#1832. Check if the Sentence Is Pangram
#https://leetcode.com/problems/check-if-the-sentence-is-pangram/description/

class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        if len(set(sentence)) == 26: 
            return True
        return False