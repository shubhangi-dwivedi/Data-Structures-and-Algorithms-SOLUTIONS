//6. Consonants and Vowels check - Java
//https://practice.geeksforgeeks.org/problems/consonants-and-vowels-check-java/1/?track=module-2-arrays-and-strings-java&batchId=114#

// { Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    
	public static void main (String[] args)
	{
	    //taking input using class Scanner
    	 Scanner sc = new Scanner(System.in);
    	 
    	 //taking total count of all testcases
    	 int t = sc.nextInt();
    	 sc.nextLine();
    	 boolean flag = false;
    	 while(t-- > 0){
    	  
    	  //taking the input String
    	  String s=sc.nextLine();
    	  
    	  //Creating an object of class Geeks
    	  Geeks obj=new Geeks();
    	  
    	  //calling the checkString
    	  //method of class Geeks
    	  obj.checkString(s);
    	   
    	 }
    }
}// } Driver Code Ends


//User function Template for Java



class Geeks{
    
    static void checkString(String s)
    {
        int v=0;
        int c=0;
        
        //Your code here
        for(int i =0;i<s.length();i++){
            char curr=s.charAt(i);
            if(curr=='a'||curr=='e'||curr=='i'||curr=='o'||curr=='u')
                v++;
            else if(curr!=' ')
                c++;
        }
        if(v>c)
        System.out.print("Yes");
        else if(c>v)
        System.out.print("No");
        else
       System.out.print("Same");
        
        System.out.println();
    }
}

//Position this line where user code will be pasted.
