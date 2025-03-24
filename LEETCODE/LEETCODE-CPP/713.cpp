// 713. Subarray Product Less Than K
// https://leetcode.com/problems/subarray-product-less-than-k/

// Method-1 (2-pointers / sliding window)
class Solution
{
public:
    int numSubarrayProductLessThanK(vector<int> &nums, int k)
    {
        if (k <= 1)
        {
            return 0;
        }

        int n = nums.size(), start = 0, end = 0, prod = 1, count = 0;

        while (end < n)
        {
            prod *= nums[end];

            while (prod >= k)
            {
                prod /= nums[start];
                start++;
            }

            count = count + (end - start + 1);
            end++;
        }

        return count;
    }
};