// 997. Find the Town Judge
// https://leetcode.com/problems/find-the-town-judge/

class Solution
{
public:
    int findJudge(int n, vector<vector<int>> &trust)
    {

        int n2 = trust.size();

        vector<pair<int, int>> res(n + 1, {0, 0});

        for (int i = 0; i < n2; i++)
        {
            res[trust[i][0]].first += 1;
            res[trust[i][1]].second += 1;
        }

        for (int i = 1; i < n + 1; i++)
            if (res[i].second == n - 1 && res[i].first == 0)
                return i;

        return -1;
    }
};