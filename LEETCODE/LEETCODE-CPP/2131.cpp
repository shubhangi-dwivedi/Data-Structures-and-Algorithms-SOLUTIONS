// 2131. Longest Palindrome by Concatenating Two Letter Words
// https://leetcode.com/problems/longest-palindrome-by-concatenating-two-letter-words/

// Method-1 Using Map
class Solution
{
public:
    int longestPalindrome(vector<string> &words)
    {
        int n = words.size();
        unordered_map<string, int> mp;
        int count = 0;

        for (string &x : words)
        {
            string temp = x;

            reverse(temp.begin(), temp.end());

            if (mp[temp] > 0)
            {
                count += 4;
                mp[temp]--;
            }
            else
            {
                mp[x]++;
            }
        }

        for (auto &[word, freq] : mp)
        {
            if (word[0] == word[1] && freq > 0)
            {
                count = count + (2 * freq);
                break;
            }
        }

        return count;
    }
};