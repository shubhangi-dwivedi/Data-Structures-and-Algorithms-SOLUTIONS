// 280. Wiggle Sort
// https://leetcode.com/problems/wiggle-sort/

class Solution
{
public:
    void wiggleSort(vector<int> &nums)
    {
        int n = nums.size();

        for (int i = 1; i < n; i += 2)
        {
            if (nums[i - 1] > nums[i])
            {
                swap(nums[i], nums[i - 1]);
            }

            if (i + 1 < n && nums[i] < nums[i + 1])
            {
                swap(nums[i], nums[i + 1]);
            }
        }
    }
};