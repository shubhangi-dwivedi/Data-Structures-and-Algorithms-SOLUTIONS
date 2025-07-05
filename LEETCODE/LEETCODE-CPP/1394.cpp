// 1394. Find Lucky Integer in an Array
// https://leetcode.com/problems/find-lucky-integer-in-an-array/

// Method-1 using map
class Solution
{
public:
    int findLucky(vector<int> &arr)
    {
        map<int, int> freq;

        for (int i = 0; i < arr.size(); i++)
        {
            freq[arr[i]]++;
        }

        int maxEle = -1;
        for (auto x : freq)
        {
            if (x.first == x.second)
            {
                maxEle = max(maxEle, x.first);
            }
        }

        return maxEle;
    }
};