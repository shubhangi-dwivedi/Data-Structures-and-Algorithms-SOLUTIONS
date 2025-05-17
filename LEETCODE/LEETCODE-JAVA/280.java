//280. Wiggle Sort
//https://leetcode.com/problems/wiggle-sort/

class Solution {
    public void wiggleSort(int[] nums) {
        int n=nums.length;

        for(int i=1;i<n;i+=2){
            if(nums[i]<nums[i-1]){
                int temp=nums[i];
                nums[i]=nums[i-1];
                nums[i-1]=temp;
            }

            if(i+1<n && nums[i]<nums[i+1]){
                int temp=nums[i];
                nums[i]=nums[i+1];
                nums[i+1]=temp;
            }
        }
    }
}