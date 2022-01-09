//485. Max Consecutive Ones

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,max_1=0,n=nums.size();
        
        for(int i=0;i<n;i++){
            if(nums[i]==1)
            {
                count++;
                max_1=max(max_1,count);
            }
            else
                count=0;
        }
        return max_1;
    }
};