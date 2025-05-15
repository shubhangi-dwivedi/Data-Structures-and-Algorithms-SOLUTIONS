// 91. Decode Ways
// https://leetcode.com/problems/decode-ways/description

// Method-1 (Memoization)
class Solution
{
public:
    int numDecodings(string s)
    {
        int n = s.length();
        vector<int> dp(n + 1, -1);

        return helper(s, n - 1, dp);
    }

    int helper(string s, int idx, vector<int> &dp)
    {
        if (idx < 0)
        {
            return 1;
        }

        if (dp[idx] != -1)
        {
            return dp[idx];
        }

        int res = 0;

        if (s[idx] != '0')
        {
            res += helper(s, idx - 1, dp);
        }

        if (idx - 1 >= 0 && (s[idx - 1] == '1' || (s[idx - 1] == '2' && s[idx] <= '6')))
        {
            res += helper(s, idx - 2, dp);
        }

        return dp[idx] = res;
    }
};
