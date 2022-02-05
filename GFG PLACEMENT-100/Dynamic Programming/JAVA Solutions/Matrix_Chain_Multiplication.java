//Matrix Chain Multiplication
//https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1/#

// { Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while(t-- > 0){
            int N = Integer.parseInt(in.readLine());
            String input_line[] = in.readLine().trim().split("\\s+");
            int arr[]= new int[N];
            for(int i = 0; i < N; i++)
                arr[i] = Integer.parseInt(input_line[i]);
            
            Solution ob = new Solution();
            System.out.println(ob.matrixMultiplication(N, arr));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{

    //Method-1 (Tabulation) (time-O(n^3))
    static int matrixMultiplication(int n, int arr[])
    {
        // code here
        int dp[][]=new int[n][n];
        for(int i=0;i<n-1;i++)
            dp[i][i+1]=0;
            
        for(int gap=2;gap<n;gap++)
            for(int i=0;i+gap<n;i++){
                int j=i+gap;
                dp[i][j]=Integer.MAX_VALUE;
                
                for(int k=i+1;k<j;k++)  
                    dp[i][j]=Math.min(dp[i][j], dp[i][k]+dp[k][j]+arr[i]*arr[k]*arr[j]);
            }
            
            return dp[0][n-1];
    }
}


//Method-2 (memoization)
class Solution{
    static int dp[][]=new int[101][101];
    
    static int matrixMultiplication(int n, int a[])
    {
        // code here
        for (int[] row: dp) 
            Arrays.fill(row, -1);
        
        int res=solve(a,0,n-1);
        
        return res;
    }
    
    static int solve(int a[],int i,int j){
        if(i+1==j)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        dp[i][j]=Integer.MAX_VALUE;
        for(int k=i+1;k<j;k++)
            dp[i][j]=Math.min(dp[i][j], solve(a,i,k)+solve(a,k,j)+a[i]*a[j]*a[k]);
            
        return dp[i][j];
    }
}