//91. Decode Ways
//https://leetcode.com/problems/decode-ways/description

// Method-1 (Memoization)
class Solution {
    public int numDecodings(String s) {
        int n=s.length();
        int[] dp=new int[n+1];
        Arrays.fill(dp,-1);

        return helper(s,n-1,dp);
    } 

    public int helper(String s, int idx, int[] dp){
        if(idx<0){
            return 1;
        }

        if(dp[idx]!=-1){
            return dp[idx];
        }

        int res=0;
        if(s.charAt(idx)!='0'){
            res+=helper(s,idx-1,dp);
        }

        if(idx-1>=0 && (s.charAt(idx-1)=='1' || (s.charAt(idx-1)=='2' && s.charAt(idx)<='6'))){
            res+=helper(s,idx-2,dp);
        }

        return dp[idx]=res;
    }
}