//34. Find First and Last Position of Element in Sorted Array


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> res(2,-1);
        if(nums.size()==0)
            return res;
        
        int n=nums.size(),start=0,end=n-1;
        
        while(start<end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]<target)
                start=mid+1;
            else
                end=mid;
        }
        
        if(nums[start]!=target)
            return res;
        
        res[0]=start;
        
        end=n-1;
        
        while(start<end)
        {
            int mid=(start+(end-start)/2)+1;
            if(nums[mid]>target)
                end=mid-1;
            else
                start=mid;
        }
        
        res[1]=end;
        
        return res;
        
    }
};