# 846. Hand of Straights
# https://leetcode.com/problems/hand-of-straights/description/

# Method-1 using sorting and greedy(TC-O(n^2))
class Solution:
    def isNStraightHand(self, hand: List[int], groupSize: int) -> bool:
        n=len(hand)

        if n%groupSize!=0:
            return False

        hand.sort()

        def find_successor(i):
            next_val=hand[i]+1
            hand[i]=-1
            count=1
            i+=1

            while i<n and count<groupSize:
                if hand[i]==next_val:
                    next_val=hand[i]+1
                    hand[i]=-1

                    count+=1
                i+=1
            
            return count==groupSize

        for i in range(n):
            if hand[i]>=0:
                if not find_successor(i):
                    return False
            
        return True
