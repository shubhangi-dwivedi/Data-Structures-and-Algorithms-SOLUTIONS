//1480. Running Sum of 1d Array
//https://leetcode.com/problems/running-sum-of-1d-array/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        for(int i=1;i<nums.size();i++)
            nums[i]+=nums[i-1];
        
        return nums;
    }
};