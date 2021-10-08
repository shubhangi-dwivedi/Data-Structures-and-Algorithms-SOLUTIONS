//27. Remove Element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int x=0;
        
        for(int i=0;i<nums.size();i++)
            if(nums[i]!=val)
            {
                nums[x]=nums[i];
                x++;
            }
        return x;
    }
};