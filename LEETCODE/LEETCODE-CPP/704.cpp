//704. Binary Search
//https://leetcode.com/problems/binary-search/

class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int l=0, u=nums.size();
        int mid;
        
        while(l<=u)
        {
            mid=l + (u-l)/2;
            
            if(nums[mid]==target)
                break;
            else if(nums[mid]>target)
                u=mid-1;
            else if(nums[mid]<target)
                l=mid+1;
        }
        
        if(nums[mid]==target)
            return mid;
        else
            return -1;
    }
};