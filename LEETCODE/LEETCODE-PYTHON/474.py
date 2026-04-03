# 474. Ones and Zeroes
# https://leetcode.com/problems/ones-and-zeroes/description/

# Method-1 brute force (2^k)
class Solution:
    def findMaxForm(self, strs: List[str], m: int, n: int) -> int:
        strs_len=len(strs)
        zeroes_count_list, ones_count_list=[0]*strs_len, [0]*strs_len
        ans=0

        for i in range(strs_len):
            zeroes=0
            ones=0
            for j in strs[i]:
                if j=="0":
                    zeroes+=1
                else:
                    ones+=1

            zeroes_count_list[i]=zeroes
            ones_count_list[i]=ones
            
        
        def helper(s,i,j):
            if i > m or j > n:
                return -sys.maxsize-1

            if s >= strs_len:
                return 0
            
            temp= max(helper(s+1, i+zeroes_count_list[s], j+ones_count_list[s])+1, helper(s+1, i, j))

            return temp

        return helper(0,0,0)
    
# Method -2 using memoization (TC-O(k*m*n))
class Solution:
    def findMaxForm(self, strs: List[str], m: int, n: int) -> int:
        strs_len=len(strs)
        zeroes_count_list, ones_count_list=[0]*strs_len, [0]*strs_len
        ans=0

        dp=[[[-1 for _ in range(n+5)] for _ in range(m+5)] for _ in range(strs_len+5)]

        for i in range(strs_len):
            zeroes=0
            ones=0
            for j in strs[i]:
                if j=="0":
                    zeroes+=1
                else:
                    ones+=1

            zeroes_count_list[i]=zeroes
            ones_count_list[i]=ones
            
        
        def helper(s,i,j):
            if i > m or j > n:
                return -sys.maxsize-1

            if s >= strs_len:
                return 0
            
            if dp[s][i][j]!=-1:
                return dp[s][i][j]
            
            dp[s][i][j]= max(1+helper(s+1, i+zeroes_count_list[s], j+ones_count_list[s]), helper(s+1, i, j))

            return dp[s][i][j]

        return helper(0,0,0)