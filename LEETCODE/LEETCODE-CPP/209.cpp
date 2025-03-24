// 209. Minimum Size Subarray Sum
// https://leetcode.com/problems/minimum-size-subarray-sum/description/

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int tot_sum = 0, n = nums.size();

        int start = 0, res = INT_MAX;
        for (int end = 0; end < n; end++)
        {
            tot_sum += nums[end];

            if (tot_sum < target)
            {
                continue;
            }
            else
            {
                while (tot_sum - nums[start] >= target)
                {
                    tot_sum -= nums[start];
                    start++;
                }

                res = min(res, (end - start + 1));
            }
        }

        return (res == INT_MAX) ? 0 : res;
    }
};