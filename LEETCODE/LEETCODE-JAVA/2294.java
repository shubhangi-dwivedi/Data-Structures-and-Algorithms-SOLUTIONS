// 2294. Partition Array Such That Maximum Difference Is K
// https://leetcode.com/problems/partition-array-such-that-maximum-difference-is-k

// Method-1 using sort
class Solution {
    public int partitionArray(int[] nums, int k) {
        int n=nums.length;

        Arrays.sort(nums);
        int subsetCount=1, minVal=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]-minVal > k){
                subsetCount++;
                minVal=nums[i];
            }
        }

        return subsetCount;
    }
}