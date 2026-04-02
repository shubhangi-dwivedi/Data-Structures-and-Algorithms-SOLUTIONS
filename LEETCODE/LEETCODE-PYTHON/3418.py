# 3418. Maximum Amount of Money Robot Can Earn
# https://leetcode.com/problems/maximum-amount-of-money-robot-can-earn/description/

# Method-1 brute force (TC-O(4^(m+n)))
class Solution:
    def maximumAmount(self, coins: List[List[int]]) -> int:
        def helper(i,j,k):
            if i>=len(coins) or j>=len(coins[0]):
                return -sys.maxsize-1

            if i==len(coins)-1 and j==len(coins[0])-1:
                if coins[i][j]<0 and k>0:
                    return 0
                else:
                    return coins[i][j] 

            if coins[i][j]<0 and k>0:
                return max(helper(i+1,j,k-1), helper(i,j+1,k-1), helper(i+1,j,k)+coins[i][j], helper(i,j+1,k)+coins[i][j])
            else:
                return max(helper(i,j+1,k)+coins[i][j], helper(i+1,j,k)+coins[i][j])
                
        return helper(0,0,2)

# Method-2 memoization (TC- O(m*n))
class Solution:
    def maximumAmount(self, coins: List[List[int]]) -> int:
        m, n, k=len(coins), len(coins[0]), 3
        dp= [[[-10**9 for _ in range(k)] for _ in range(n)] for _ in range(m)]

        def helper(i,j,k):
            if i>=len(coins) or j>=len(coins[0]):
                return -10**9

            if i==len(coins)-1 and j==len(coins[0])-1:
                if coins[i][j]<0 and k>0:
                    return 0
                else:
                    return coins[i][j] 

            if dp[i][j][k]!=-10**9:
                return dp[i][j][k]

            if coins[i][j]<0 and k>0:
                dp[i][j][k]= max(helper(i+1,j,k-1), helper(i,j+1,k-1), helper(i+1,j,k)+coins[i][j], helper(i,j+1,k)+coins[i][j])

                return dp[i][j][k]
            else:
                dp[i][j][k]= max(helper(i,j+1,k), helper(i+1,j,k))+coins[i][j]
                return dp[i][j][k]
                
        
        return helper(0,0,2)