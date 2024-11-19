//35. Search Insert Position
//https://leetcode.com/problems/search-insert-position/

//Method-1 Binary search
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
     
        int l=0,h=nums.size()-1,mid;
        
        while(l<=h)
        {
            mid=l+(h-l)/2;
            
            if(nums[mid]==target)
               return mid;
            
            else if(nums[mid]>target)
                h=mid-1;
            else
                l=mid+1;
        }
        
        return l;
    }
};