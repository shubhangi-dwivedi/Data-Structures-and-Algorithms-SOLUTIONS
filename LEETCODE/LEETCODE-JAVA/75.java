//75 . Sort Colors
//https://leetcode.com/problems/sort-colors/description

//Method-1 Dutch National Flag Algorithm
class Solution {
    public void sortColors(int[] nums) {
        int n=nums.length;

        int low=0, mid=0, high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                int temp=nums[mid];
                nums[mid]=nums[low];
                nums[low]=temp;
                low++;
                mid++;
            }
            else if(nums[mid]==2){
                int temp=nums[mid];
                nums[mid]=nums[high];
                nums[high]=temp;
                high--;
            }
            else{
                mid++;
            }
        }
    }
}