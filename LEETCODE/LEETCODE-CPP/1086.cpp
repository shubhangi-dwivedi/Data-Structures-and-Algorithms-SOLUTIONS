// 1086. High Five
// https://leetcode.com/problems/high-five/

class Solution
{
public:
    vector<vector<int>> highFive(vector<vector<int>> &items)
    {
        unordered_map<int, vector<int>> scores;

        for (auto &item : items)
        {
            scores[item[0]].push_back(item[1]);
        }

        vector<vector<int>> res;
        for (auto &[id, sc] : scores)
        {
            sort(sc.begin(), sc.end(), greater<int>());
            int sum = 0;
            for (int i = 0; i < 5; ++i)
            {
                sum += sc[i];
            }
            res.push_back({id, sum / 5});
        }

        sort(res.begin(), res.end());
        return res;
    }
};
