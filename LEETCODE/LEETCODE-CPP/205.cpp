// 205. Isomorphic Strings
// https://leetcode.com/problems/isomorphic-strings/

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        int m = s.length(), n = t.length();

        if (m != n)
        {
            return false;
        }

        unordered_map<char, char> sMap;
        unordered_map<char, char> tMap;

        for (int i = 0; i < m; i++)
        {
            char x = s[i], y = t[i];

            if (sMap.count(x) && sMap[x] != y)
            {
                return false;
            }
            if (tMap.count(y) && tMap[y] != x)
            {
                return false;
            }

            sMap[x] = y;
            tMap[y] = x;
        }

        return true;
    }
};