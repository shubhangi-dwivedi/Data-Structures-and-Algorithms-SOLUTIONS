//215. Kth Largest Element in an Array

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end(),greater<int>());
        
       return nums[k-1];
    }
};