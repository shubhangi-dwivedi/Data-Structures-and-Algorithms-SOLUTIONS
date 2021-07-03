//1848. Minimum Distance to the Target Element

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) 
    {
        int i,min=INT_MAX;
        for( i=0;i<nums.size();i++)
        {
            if(nums[i]==target && min>abs(i-start))
                min=abs(i-start);    
        }
            
        return min;
    }
};