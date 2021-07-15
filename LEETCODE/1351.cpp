//1351. Count Negative Numbers in a Sorted Matrix

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        int n1=grid.size(),n2=grid[0].size();
        for(int i=0;i<n1;i++)
            for(int j=0;j<n2;j++)
                if(grid[i][j]<0)
                    count++;
        
        return count;
    }
};