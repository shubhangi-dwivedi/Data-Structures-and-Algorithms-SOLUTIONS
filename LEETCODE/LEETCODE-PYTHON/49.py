# 49. Group Anagrams
# https://leetcode.com/problems/group-anagrams/description/

# Method-1 categorize by sorting string O(NKlogK)
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res=collections.defaultdict(list)

        for s in strs:
            res[tuple(sorted(s))].append(s)

        return list(res.values())

# Method-2 count character frequence O(NK)
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res=collections.defaultdict(list)

        for s in strs:
            temp=[0]*26

            for i in s:
                temp[ord(i)-ord('a')]+=1

            res[tuple(temp)].append(s)

        return list(res.values())