// 73. Set Matrix Zeroes
// https://leetcode.com/problems/set-matrix-zeroes/description/

//Method-1 using extra space place(in-place) [Time Complexity : O((N*M)), Space Complexity : O(M+N)]
class Solution {
    public void setZeroes(int[][] matrix) {
        int m=matrix.length, n=matrix[0].length;
        Set<Integer> r=new HashSet<>();
        Set<Integer> c=new HashSet<>();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    r.add(i);
                    c.add(j);
                }
            }
        }

        for(int x: r){
            for(int i=0;i<n;i++){
                matrix[x][i]=0;
            }
        }

        for(int x: c){
            for(int i=0;i<m;i++){
                matrix[i][x]=0;
            }
        }

    }
}