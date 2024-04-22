// 3110. Score of a String
//  https://leetcode.com/problems/score-of-a-string/description/

// Method -1
class Solution
{
public:
    int scoreOfString(string s)
    {
        int total = 0;
        for (int i = 1; i < s.length(); i++)
        {
            int diff = abs(int(s[i - 1]) - int(s[i]));

            total += diff;
        }

        return total;
    }
};

// Method-2
class Solution
{
public:
    int scoreOfString(string s)
    {
        int total = 0;
        for (int i = 1; i < s.length(); i++)
        {
            int diff = abs(int(s[i - 1] - s[i]));

            total += diff;
        }

        return total;
    }
};

// Method-3 (using static_cast)
class Solution
{
public:
    int scoreOfString(string s)
    {
        int total = 0;
        for (int i = 1; i < s.length(); i++)
        {
            int diff = abs(static_cast<int>(s[i - 1] - s[i]));

            total += diff;
        }

        return total;
    }
};