//34. Find First and Last Position of Element in Sorted Array
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

//Method-1 Binary Search(find start, last index separately)
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> res(2,-1);
        if(nums.size()==0)
            return res;
        
        int n=nums.size(),start=0,end=n-1;
        int x=-1;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            
            if(nums[mid]==target){
                x=mid;
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else
                end=mid-1;
        }
        
        res[0]=x;

        start=0,end=n-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;

            if(nums[mid]==target){
                x=mid;
                start=mid+1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else
                end=mid-1;
        }
        
        res[1]=x;

        return res;
        
    }
};


//Method-2 Binary search(cleaner way)
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