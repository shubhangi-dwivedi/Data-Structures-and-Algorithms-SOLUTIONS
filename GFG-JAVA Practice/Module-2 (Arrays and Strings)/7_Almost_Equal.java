//7. Almost Equal -Java 
//https://practice.geeksforgeeks.org/problems/almost-equal-java/0/?track=module-2-arrays-and-strings-java&batchId=114#

// { Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    
	public static void main (String[] args)
	{
	     //taking input using Scanner class
    	 Scanner sc = new Scanner(System.in);
    	 
    	 //taking total number of testcases
    	 int t = sc.nextInt();
    	 
    	 boolean flag = false;
    	 while(t-- > 0){
    	   
    	   //taking the 2 strings
    	   String s1=sc.next();
    	   String s2=sc.next();
    	   
    	   //creating an object of class Geeks
    	   Geeks obj=new Geeks();
    	   
    	   //calling coutChars method
    	   //of class Geeks and passing
    	   //both the Strings and printing
    	   //the result
    	   System.out.println(obj.coutChars(s1,s2));
    	   
    	 }
    }
}




 // } Driver Code Ends
//User function Template for Java

/*Function to count number of characters 
* to make s1 and s2 equal
* s1 : first string
* s2 : second string
*/
class Geeks{
    
    static int coutChars(String s1, String s2)
    {
       //Your code here
        int m=s1.length(),n=s2.length();
        int x=0;
    
        int a[]=new int[26];
        
        for(int i=0;i<m;i++)
            a[s1.charAt(i)-'a']++;
            
        for(int i=0;i<n;i++)
            a[s2.charAt(i)-'a']--;
        
        int sum=0;
        for(int i=0;i<26;i++)
            sum+=Math.abs(a[i]);
        
        return sum;
    }
}

// { Driver Code Starts.
  // } Driver Code Ends