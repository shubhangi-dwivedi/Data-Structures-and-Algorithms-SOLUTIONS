// 3024. Type of Triangle
// https://leetcode.com/problems/type-of-triangle/description

class Solution
{
public:
    string triangleType(vector<int> &nums)
    {
        if (nums[0] == nums[1] && nums[1] == nums[2])
        {
            return "equilateral";
        }

        if (nums[0] + nums[1] > nums[2] && nums[1] + nums[2] > nums[0] && nums[2] + nums[0] > nums[1])
        {
            if (nums[0] == nums[1] || nums[1] == nums[2] || nums[2] == nums[0])
            {
                return "isosceles";
            }
            else
            {
                return "scalene";
            }
        }

        return "none";
    }
};