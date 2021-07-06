//414. Third Maximum Number

class Solution {
public:
    int thirdMax(vector<int>& nums) {
     
        sort(nums.begin(),nums.end(),greater<int>());
        
        int n=nums.size(),j=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[j])
            {
                j++;
                nums[j]=nums[i];
            }
        }
        
        if(j==0||j==1)
            return nums[0];
        else
            return nums[2];
    }
};