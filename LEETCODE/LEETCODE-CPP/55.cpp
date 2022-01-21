//55. Jump Game
//https://leetcode.com/problems/jump-game/

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        
        int end=n-1;
        for(int i=n-2;i>=0;i--) //similar to minimum jump to reach the end
            if(nums[i]+i>=end)
                end=i;
        
        if(end==0)
            return true;
        return false;
    }
};