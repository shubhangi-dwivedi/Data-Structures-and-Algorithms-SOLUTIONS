// 1094. Car Pooling
// https://leetcode.com/problems/car-pooling

// Method-1 Prefix Sum
class Solution
{
public
    boolean carPooling(int[][] trips, int capacity)
    {
        int[] sum = new int[1001];
        int n = trips.length;
        int max_idx = 0;

        for (int i = 0; i < n; i++)
        {
            sum[trips[i][1]] += trips[i][0];
            sum[trips[i][2]] -= trips[i][0];

            max_idx = Math.max(max_idx, trips[i][2]);
        }

        if (sum[0] > capacity)
        {
            return false;
        }
        for (int i = 1; i < max_idx; i++)
        {
            sum[i] += sum[i - 1];

            if (sum[i] > capacity)
            {
                return false;
            }
        }

        return true;
    }
}

// Method-2 priority queue
class Solution
{
public
    boolean carPooling(int[][] trips, int capacity)
    {
        int n = trips.length;
        if (n == 0)
            return true;

        PriorityQueue<int[]> pq = new PriorityQueue<>((a)->{
            if (a[0] == b[0])
            {
                return a[1] - b[1];
            }
            return a[0] - b[0];
        });

        for (int i = 0; i < n; i++)
        {
            pq.offer(new int[]{trips[i][1], trips[i][0]});

            pq.offer(new int[]{trips[i][2], -trips[i][0]});
        }

        int onboard = 0;
        while (!pq.isEmpty())
        {
            onboard += pq.poll()[1];

            if (onboard > capacity)
            {
                return false;
            }
        }

        return true;
    }
}