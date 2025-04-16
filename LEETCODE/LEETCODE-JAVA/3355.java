//3355. Zero Array Transformation I
//https://leetcode.com/problems/zero-array-transformation-i/

//Method-1 using prefix sum/sweep line
class Solution {
    public boolean isZeroArray(int[] nums, int[][] queries) {
        int n1=nums.length, n2=queries.length;

        int[] diff=new int[n1+1];
        for(int i=0;i<n1+1;i++){
            diff[i]=0;
        }

        for(int i=0;i<n2;i++){
            diff[queries[i][0]]+=1;
            diff[queries[i][1]+1]+=-1;
        }

        for(int i=1;i<n1+1;i++){
            diff[i]+=diff[i-1];
        }

        for(int i=0;i<n1;i++){
            if(nums[i]>diff[i]){
                return false;
            }
        }

        return true;
    }
}