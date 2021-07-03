//268. Missing Number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum1=0,sum2=0;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
            sum2+=nums[i];
        
        for(int i=0;i<=n;i++)
            sum1+=i;
        
        return sum1-sum2;
    }
};