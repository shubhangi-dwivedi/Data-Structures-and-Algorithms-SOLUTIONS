//80. Remove Duplicates from Sorted Array II

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int x=0,count=1,y=0;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[x]==nums[i] && count<2)
            {
                x++;
                nums[x]=nums[i];
                count++;
            }
            else if(nums[x]!=nums[i])
            {
                count=1;
                x++;
                nums[x]=nums[i];
            }
            
        }
        return x+1;
        
    }
};