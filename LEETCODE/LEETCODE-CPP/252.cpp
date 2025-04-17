// 252. Meeting Rooms
// https://leetcode.com/problems/meeting-rooms/description/

// Method-1 using sorting
class Solution
{
public:
    bool canAttendMeetings(vector<vector<int>> &intervals)
    {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());

        for (int i = 1; i < n; i++)
        {
            if (intervals[i - 1][1] > intervals[i][0])
            {
                return false;
            }
        }

        return true;
    }
};

// Method-2 using min-heap
class Solution
{
public:
    bool canAttendMeetings(vector<vector<int>> &intervals)
    {
        int n = intervals.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for (int i = 0; i < n; i++)
        {
            pq.push({intervals[i][0], intervals[i][1]});
        }

        while (!pq.empty())
        {
            if (pq.size() == 1)
            {
                return true;
            }
            int first_end = pq.top().second;
            pq.pop();

            int second_start = pq.top().first;

            cout << first_end << " " << second_start << endl;
            if (first_end > second_start)
            {
                return false;
            }
        }

        return true;
    }
};