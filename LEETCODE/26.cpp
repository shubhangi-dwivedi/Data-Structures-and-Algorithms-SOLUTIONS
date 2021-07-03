//26. Remove Duplicates from Sorted Array

class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int n,x=0;
        
        n=nums.size();
        
        if(n==0)
            return 0;
        
        
        for(int i=1;i<n;i++)
            if(nums[x]!=nums[i])
            {
                x++;
                nums[x]=nums[i];
            }
        
        return x+1;
        
    }
};