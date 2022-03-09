//1827. Minimum Operations to Make the Array Increasing
//https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size(),count=0;
        
        if(n==1)
            return 0;
        
        for(int i=1;i<n;i++)
            if(nums[i-1]>=nums[i]){
                count+=nums[i-1]-nums[i]+1;
                nums[i]=nums[i-1]+1;
            }
        
        return count;
    }
};