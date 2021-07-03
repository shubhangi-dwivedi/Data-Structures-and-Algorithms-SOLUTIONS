//283. Move Zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int lz=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
                nums[lz++]=nums[i];
        }    
        
        for(int i=lz;i<nums.size();i++)
            nums[i]=0;
    }
};