// 1929. Concatenation of Array
// https://leetcode.com/problems/concatenation-of-array/

// method 1
class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n * 2, 0);

        for (int i = 0; i < n; i++)
        {
            ans[i] = nums[i];
            ans[i + n] = nums[i];
        }

        return ans;
    }
};

// method 2
class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {

        int n1 = nums.size();

        for (int i = 0; i < n1; i++)
            nums.push_back(nums[i]);

        return nums;
    }
};