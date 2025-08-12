# 205. Isomorphic Strings
# https://leetcode.com/problems/isomorphic-strings/
class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        m=len(s)
        n=len(t)

        if m!=n:
            return False

        s_map={}
        t_map={}

        for x, y in zip(s,t):
            if x in s_map and s_map[x]!=y:
                return False

            if y in t_map and t_map[y]!=x:
                return False
        
            s_map[x]=y
            t_map[y]=x

        return True