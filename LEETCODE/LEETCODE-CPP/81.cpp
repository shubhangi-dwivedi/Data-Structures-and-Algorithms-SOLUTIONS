//81. Search in Rotated Sorted Array II
//https://leetcode.com/problems/search-in-rotated-sorted-array-ii/

class Solution {
public:
    bool search(vector<int>& nums, int target) {
       int l=0;
       int h = nums.size()-1;
       while(l<=h and h>=0)
       {
            while (l < h && nums[l] == nums[l + 1])
              ++l;
            while (l < h && nums[h] == nums[h - 1])
              --h;
           int mid = (l+h)/2;
           if(nums[mid] == target) return true;
           if(nums[l]<=nums[mid])
           {
               if(target>=nums[l] and target<=nums[mid])
                   h = mid-1;
               else
                   l = mid+1;
           }
           else
           {
               if(target>=nums[mid] and target<=nums[h])
                   l = mid+1;
               else
                   h = mid-1;
           }
       }
    return false;
    }
};