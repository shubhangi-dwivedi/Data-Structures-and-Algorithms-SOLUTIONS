//766. Toeplitz Matrix
//https://leetcode.com/problems/toeplitz-matrix/description/

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        for (int r = 1; r < m; ++r)
            for (int c = 1; c < n; ++c)
                if (matrix[r][c] != matrix[r - 1][c - 1]) 
                return false;
        
        return true;
    }
};