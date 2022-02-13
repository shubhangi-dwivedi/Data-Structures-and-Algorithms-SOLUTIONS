//9. Xoring and Clearing - Java
//https://practice.geeksforgeeks.org/problems/xoring-and-clearing-java/0/?track=module-2-arrays-and-strings-java&batchId=114

// { Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    
	public static void main (String[] args)
	{
    	 Scanner sc = new Scanner(System.in);
    	 int t = sc.nextInt();
    	
    	 boolean flag = false;
    	 while(t-- > 0){
    	     int n=sc.nextInt();
    	     int arr[]=new int[n];
    	     for(int i=0;i<n;i++)
    	     arr[i]=sc.nextInt();
    	     
    	     
    	        Geeks obj=new Geeks();
            	obj.xor1ToN(arr,n);
        	    obj.printArr(arr,n);
        	    obj.setToZero(arr,n);
        	    obj.printArr(arr,n);
    	   
    	 }
    }
}



 // } Driver Code Ends
//User function Template for Java

class Geeks{
    
    static void printArr(int arr[],int n)
    {
        //Your code for printing arr here
        for(int i=0;i<n;i++)
            System.out.print(arr[i]+" ");
        
        System.out.println();
    }
    
   static void setToZero(int arr[],int n)
    {
        //use Arrays.fill to set arr to zero
        Arrays.fill(arr,0);
    }
    
   static void xor1ToN(int arr[], int n)
    {
           //Xor arr[i]^i
        for(int i=0;i<n;i++)
            arr[i]=arr[i]^i;
    }
}

// { Driver Code Starts.
  // } Driver Code Ends