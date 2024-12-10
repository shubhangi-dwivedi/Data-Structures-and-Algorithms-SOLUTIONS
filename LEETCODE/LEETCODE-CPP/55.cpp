//55. Jump Game
//https://leetcode.com/problems/jump-game/

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        
        int end=n-1; // The goal is to reach the last index, so set 'end' as the last index

        // Loop from the second last element to the first
        for(int i=n-2;i>=0;i--) //similar to minimum jumps to reach the end

            // If it's possible to reach or surpass the 'end' position from index 'i'
            if(nums[i]+i>=end)
                end=i; // Update 'end' to this position, meaning we can now reach or jump from here
        
        // If we managed to reach the first index (end == 0), return true
        if(end==0)
            return true;

        // Otherwise, return false
        return false;
    }
};
