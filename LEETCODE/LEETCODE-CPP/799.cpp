//799. Champagne Tower
//https://leetcode.com/problems/champagne-tower/

//Method-1 (dp-memoization)
class Solution {
public:
    double dp[101][101];
    double champagneTower(int poured, int query_row, int query_glass) {
        memset(dp,-1,sizeof(dp));
        
        return min(1.00, calc(poured,query_row,query_glass));
    }
    
    double calc(int poured, int row, int glass){
        if(glass<0 || glass>row || row<0)
            return 0.00;
        
        if(row==0 && glass==0)
            return poured;
        
        if(dp[row][glass]>-1)
            return dp[row][glass];
        
        double left= (calc(poured,row-1,glass-1)-1)/2;
        if(left<0)
            left=0;
        
        double right= (calc(poured,row-1,glass)-1)/2;
        if(right<0)
            right=0;
        
        return dp[row][glass]=left+right;
    }
};