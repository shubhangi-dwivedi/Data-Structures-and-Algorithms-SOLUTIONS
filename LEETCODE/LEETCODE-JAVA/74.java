//74. Search a 2D Matrix
//https://leetcode.com/problems/search-a-2d-matrix/

//Method-1 (using Binary search)
class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int m=matrix.length;
        int i=0, j=matrix[0].length-1;

        while(i<m && j>=0){
            if(matrix[i][j]==target){
                return true;
            }
            else if(target<matrix[i][j]){
                j--;
            }
            else{
                i++;
            }
        }

        return false;
    }
}