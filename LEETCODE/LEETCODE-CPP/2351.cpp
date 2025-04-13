// 2351. First Letter to Appear Twice
// https://leetcode.com/problems/first-letter-to-appear-twice/

// Method-1 using set
class Solution
{
public:
    char repeatedCharacter(string s)
    {
        int n = s.length(), i;
        set<char> st;

        for (i = 0; i < n; i++)
        {
            if (st.find(s[i]) != st.end())
                break;

            st.insert(s[i]);
        }

        return s[i];
    }
};

// Method-2 using hashmap
class Solution
{
public:
    char repeatedCharacter(string s)
    {
        int n = s.length();
        unordered_map<char, int> m;

        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;

            if (m[s[i]] == 2)
            {
                return s[i];
            }
        }

        return -1;
    }
};