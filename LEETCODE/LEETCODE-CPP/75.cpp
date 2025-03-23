// 75. Sort Colors
// https://leetcode.com/problems/sort-colors/

// Method-1 (brute force)
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int count0 = 0, count1 = 0, count2 = 0;

        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            switch (nums[i])
            {
            case 0:
                count0++;
                break;
            case 1:
                count1++;
                break;
            case 2:
                count2++;
                break;
            }
        }

        int i = 0;
        while (count0)
        {
            nums[i] = 0;
            count0--;
            i++;
        }

        while (count1)
        {
            nums[i] = 1;
            count1--;
            i++;
        }

        while (count2)
        {
            nums[i] = 2;
            count2--;
            i++;
        }
    }
};

// Method-2 (brute force, just another way to write it)
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int n = nums.size();

        int zeros = 0, ones = 0, twos = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                zeros++;
            }
            else if (nums[i] == 1)
            {
                ones++;
            }
            else
            {
                twos++;
            }
        }

        for (int i = 0; i < zeros; i++)
        {
            nums[i] = 0;
        }

        for (int i = zeros; i < zeros + ones; i++)
        {
            nums[i] = 1;
        }

        for (int i = zeros + ones; i < n; i++)
        {
            nums[i] = 2;
        }
    }
};

// Method-3 (3-pointers or Dutch National Flag Algo)
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int n = nums.size();

        int low = 0, mid = 0, high = n - 1;
        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                low++, mid++;
            }
            else if (nums[mid] == 2)
            {
                swap(nums[mid], nums[high]);
                high--;
            }
            else
            {
                mid++;
            }
        }
    }
};