//3. Count the Specials - Java//
//https://practice.geeksforgeeks.org/problems/count-the-specials-java/1/?track=module-2-arrays-and-strings-java&batchId=114#

// { Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
import java.lang.*;


 // } Driver Code Ends
//User function Template for Java

/*Class Geeks with countSpecials as its member function
* a : input array
* n : size of array
k : to calculate floor(n/k)
*/
class Geeks{

    //Method-1 (brute force) (nested loops)
    static void countSpecials(int a[], int n, int k){
        int f = (int)Math.floor(n/k);
        int f_count=0;
        // your code here
        for(int i=0;i<n;i++){
            int count=0;
            
            for(int j=0;j<n;j++)
                if(a[i]==a[j])
                    count++;
            
            if(f==count){
                f_count++;
                a[i]=-1;
            }
        }
        
        System.out.println(f_count);
    }
}

// { Driver Code Starts.

// Driver class
class GFG {
	public static void main (String[] args) {
	    
	    // Taking input through Scanner class
		Scanner sc = new Scanner(System.in);
		
		//taking count of testcases
		int testcase = sc.nextInt();
		
		while(testcase-- > 0){
		    
		    //taking size of array
		    int sizeof_array = sc.nextInt();
		    
		    //taking value of k
		    int k = sc.nextInt();
		    
		    //creating an array
		    int a[] = new int[sizeof_array];
		    
		    //inserting elements to the array
		    for(int i = 0;i<sizeof_array;i++){
		        a[i] = sc.nextInt();
		    }
		    
		    //creating an object of class Geeks
		    Geeks obj = new Geeks();
		    
		    //calling countSpecials method of 
		    //class Geeks
		    obj.countSpecials(a, sizeof_array, k);
		}
		
	}
}  // } Driver Code Ends