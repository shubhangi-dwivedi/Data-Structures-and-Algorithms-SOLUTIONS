// 3481. Apply Substitutions
// https://leetcode.com/problems/apply-substitutions/

// Method-1 using map
class Solution
{
public:
    string applySubstitutions(vector<vector<string>> &replacements, string text)
    {
        unordered_map<string, string> mp;

        for (auto x : replacements)
        {
            mp[x[0]] = x[1];
        }

        for (int i = 0; i < text.size();)
        {
            string key(1, text[i]); // converts the character at position i into a string (since the map uses string keys)

            if (text[i] == '%')
            {
                text.erase(i, 1);
            }
            else if (mp.find(key) != mp.end())
            {
                // Remove the original character
                // Insert the mapped string at the same position
                text.erase(i, 1);
                text.insert(i, mp[key]);
            }
            else
            {
                i++;
            }
        }

        return text;
    }
};