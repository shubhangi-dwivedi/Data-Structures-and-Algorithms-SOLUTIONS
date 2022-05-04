//1679. Max Number of K-Sum Pairs
//https://leetcode.com/problems/max-number-of-k-sum-pairs/

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int left = 0, right = nums.size()-1;
        int ans = 0;
        while(left < right){
            int curSum = nums[left] + nums[right];
            if(curSum == k) ++ans, ++left, --right;
            else if(curSum < k) ++left;
            else --right;
        }
        return ans;
    }
};