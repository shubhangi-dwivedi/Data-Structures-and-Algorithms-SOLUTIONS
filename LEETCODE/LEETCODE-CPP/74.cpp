class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(); //no. of rows in matrix
        int i=0;
        int j=matrix[0].size()-1; //no. of columns in a particular row of a matrix
        
        while(i<n && j>=0) //if i is less then n and j is greater than 0
        {
            if(matrix[i][j] == target) //if that particular value is equal to target 
              return true; 
            
            if(target < matrix[i][j]) //if it ess then decrement j otherwise incremnet
            {
                j--;
            }
            else  
            {
                i++;
            }
        }
        return false;
    }
};