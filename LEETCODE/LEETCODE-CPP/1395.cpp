// 1395. Count Number of Teams
// https://leetcode.com/problems/count-number-of-teams/

// Method-1 using adj matrices
class Solution
{
public:
    int numTeams(vector<int> &rating)
    {
        int n = rating.size();
        int maxAdjSize = 0;
        for (int &i : rating)
        {
            maxAdjSize = max(maxAdjSize, i);
        }

        vector<vector<int>> adj1(maxAdjSize + 1), adj2(maxAdjSize + 1);
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (rating[i] > rating[j])
                {
                    adj1[rating[i]].push_back(rating[j]);
                }
                else if (rating[i] < rating[j])
                {
                    adj2[rating[i]].push_back(rating[j]);
                }
            }
        }

        int res = 0;
        for (int &i : rating)
        {
            for (int &j : adj1[i])
            {
                res += adj1[j].size();
            }
            for (int &j : adj2[i])
            {
                res += adj2[j].size();
            }
        }

        return res;
    }
};