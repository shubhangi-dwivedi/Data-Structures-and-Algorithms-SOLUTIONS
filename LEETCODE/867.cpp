//867. Transpose Matrix

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) 
    {
        int a=matrix[0].size(),b=matrix.size();
        
        vector<vector<int>> res(a, vector<int>(b, 0));
        
        for(int i=0;i<b;i++)
            for(int j=0;j<a;j++)
                res[j][i]=matrix[i][j];
            
        return res;
    }
};