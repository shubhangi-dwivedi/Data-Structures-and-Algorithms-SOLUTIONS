//8. The Pattern Matcher - Java
//https://practice.geeksforgeeks.org/problems/the-pattern-matcher-java/1/?track=module-2-arrays-and-strings-java&batchId=114#

// { Driver Code Starts
//Initial Template for Java


import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    
	public static void main (String[] args)
	{
	     //Taking input using Scanner class
    	 Scanner sc = new Scanner(System.in);
    	 
    	 //taking count of total testcases
    	 int t = sc.nextInt();
    	 
    	 boolean flag = false;
    	 while(t-- > 0){
    	   
    	   //taking the String
    	   String s=sc.next();
    	   
    	   Geeks obj=new Geeks();
    	   
    	   //calling follPatt() method
    	   //of class Geeks and passing
    	   //String as parameter
    	   obj.follPatt(s);
    	   
    	 }
    }
}


 // } Driver Code Ends
//User function Template for Java



class Geeks{
    
    static void follPatt(String s)
    {
        //Your code here
        if(s.length()%2!=0)
            System.out.print(0);
        
        else{
            int i=0,count=0;
        
            while(i<s.length() && s.charAt(i)=='x'){
                i++;
                count++;
            }
        
            while(i<s.length() && s.charAt(i)=='y'){
                i++;
                count--;
            }
       
            if(count==0)
                System.out.print(1);
            else
                System.out.print(0);
        }
        
      System.out.println();
    }
}


// { Driver Code Starts.
  // } Driver Code Ends