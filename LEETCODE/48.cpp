//48. Rotate Image

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n1=matrix.size(),n2=matrix[0].size();
        
        //transposing the matrix
        for(int i=0;i<n1;i++)
        {
            for(int j=i;j<n2;j++)
                swap(matrix[i][j],matrix[j][i]);
            
            //reversing the rows
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    
    }
};