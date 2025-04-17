// 1094. Car Pooling
// https://leetcode.com/problems/car-pooling

// Method-1 priority queue
class Solution
{
public:
    bool carPooling(vector<vector<int>> &trips, int capacity)
    {
        int n = trips.size();
        if (n == 0)
            return 0;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for (int i = 0; i < n; i++)
        {
            pq.push({trips[i][1], trips[i][0]});
            pq.push({trips[i][2], -trips[i][0]});
        }

        int onboard = 0;
        while (!pq.empty())
        {
            onboard += pq.top().second;
            pq.pop();

            if (onboard > capacity)
            {
                return false;
            }
        }

        return true;
    }
};