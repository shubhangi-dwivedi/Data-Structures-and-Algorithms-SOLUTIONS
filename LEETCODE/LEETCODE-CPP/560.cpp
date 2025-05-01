// 560. Subarray Sum Equals K
// https://leetcode.com/problems/subarray-sum-equals-k/

// Method-1 (Time- O(n^2)) (TLE)
class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        int sum = 0, count = 0;

        for (int i = 0; i < n; i++)
        {
            sum = 0;

            for (int j = i; j < n; j++)
            {
                sum += nums[j];
                if (sum == k)
                {
                    count++;
                }
            }
        }

        return count;
    }
};

// Method-2 Prefix Sum (Time- O(n))
class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> sumFreq;
        int res = 0, prefSum = 0;

        // means sum freq equals 0 occurred 1 time
        sumFreq[0] = 1;
        for (auto i : nums)
        {
            prefSum += i;

            if (sumFreq.find(prefSum - k) != sumFreq.end())
            {
                res += sumFreq[prefSum - k];
            }

            sumFreq[prefSum]++;
        }

        return res;
    }
};