//33. Search in Rotated Sorted Array

class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int mid, start=0, end=nums.size()-1;
        while(start <= end)
        {
            
            mid= start+(end-start)/2;
          
            if(nums[mid]==target)
                return mid;
            
            if(nums[mid] > nums[end])
            {
                if(nums[mid] > target && nums[start] <= target)
                     end=mid-1;
                else
                    start=mid+1;
            }
            
            else if(nums[mid] < nums[start])
            {
                if(nums[mid] < target && nums[end] >= target)
                    start=mid+1;
                else
                    end=mid-1;
            }
            
            else
            {
                if(nums[mid]<target)
                    start=mid+1;
                else
                    end=mid-1;
            }
        }
        return -1;
    }
};