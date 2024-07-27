//283. Move Zeroes
//https://leetcode.com/problems/move-zeroes/description/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int last_zero=0, n=nums.size();
        
        for(int i=0;i<n;i++)
            if(nums[i]!=0)
                nums[last_zero++]=nums[i];
        
        for(int i=last_zero;i<n;i++)
            nums[i]=0;
    }
};