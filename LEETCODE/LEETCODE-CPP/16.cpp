// 16. 3Sum Closest
// https://leetcode.com/problems/3sum-closest/description/

// Method-1 (2-pointers, similar approach as 3-sum)
class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        int n = nums.size(), ans = INT_MAX / 2; // still large value, but avoiding overflow
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++)
        {
            int j = i + 1, k = n - 1;

            while (j < k)
            {
                int curr_sum = nums[i] + nums[j] + nums[k];
                int diff = abs(curr_sum - target);

                if (abs(ans - target) > diff)
                {
                    ans = curr_sum;
                }
                else if (curr_sum < target)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }

        return ans;
    }
};