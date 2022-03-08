//Largest number with given sum
//https://practice.geeksforgeeks.org/problems/largest-number-with-given-sum-1587115620/1/#


//Method-1 (Greedy solution)
//using StringBuffer class
import java.io.*;
import java.lang.*;
import java.util.*;

class Driverclass
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        //testcases
		int t = Integer.parseInt(br.readLine().trim());
		
	    while(t-- >0)
	    {
	        String inputLine[] = br.readLine().trim().split(" ");
	        
	        //taking n and sum
            int n = Integer.parseInt(inputLine[0]);
            int sum = Integer.parseInt(inputLine[1]);
            
            //calling largestNumber() function
            System.out.println(new Solution().largestNumber(n, sum));
	    }
    }
}// } Driver Code Ends



class Solution
{
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    static String largestNumber(int n, int sum)
    {
        // add your code here
        if(sum> 9*n)
            return "-1";
            
            
        StringBuffer sb= new StringBuffer();
        for(int i=0;i<n;i++){
            if(sum>9){
                sb.append("9");
                sum-=9;
            }
            else{
                sb.append(sum);
                sum=0;
            }
        }
        
        return sb.toString();
    }
}


//Method-2 (Greedy solution)
//using String
class Solution
{
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    static String largestNumber(int n, int sum)
    {
        // add your code here
        if(sum> 9*n)
            return "-1";
            
            
        String s= "";
        for(int i=0;i<n;i++){
            if(sum>9){
                s+="9";
                sum-=9;
            }
            else{
                s+=sum;
                sum=0;
            }
        }
        
        return s;
    }
}




