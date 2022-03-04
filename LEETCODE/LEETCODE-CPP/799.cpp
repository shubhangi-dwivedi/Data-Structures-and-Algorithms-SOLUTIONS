//799. Champagne Tower
//https://leetcode.com/problems/champagne-tower/


/*
Brief note about Question-

We have to return how full the jth glass in the ith row is (both i and j are 0-indexed.)
Let's take an example not given in question -
poured = 4, query_row = 2, query_glass = 0

so the answer may be found out by this 
row 0                        4 (it fills in 1, so extra remains (4 - 1 = 3), now it divides it's half both sides so (3 / 2 = 1.5) each) 
row 1			       1.5	     1.5 (they keep 1 for themselves (1.5 - 1 = 0.5) and for remaining they divide by 2 i.e (0.5 / 2 = 0.25))
row 2             0.25     0.50       0.25
                   ↑   "(0.25 + 0.25)"
				   
				   Arrow represents the required index we want,
				   so the answer is 0.25
*/


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
        
        // how much comes from left part- first coordinate(i -1, j - 1) then keep 1 for themself and then divide by 2
        double left= (calc(poured,row-1,glass-1)-1)/2;
        if(left<0) // if comes negative then, in reality zero comes
            left=0;
        
        // how much comes from right part- first coordinate(i - 1, j) then keep 1 for themself and then divide by 2
        double right= (calc(poured,row-1,glass)-1)/2;
        if(right<0)  // if comes negative then, in reality zero comes
            right=0;
        
        return dp[row][glass]=left+right;
    }
};