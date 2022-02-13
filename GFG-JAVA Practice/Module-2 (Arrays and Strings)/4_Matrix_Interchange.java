//4. Matrix Interchange - Java
//https://practice.geeksforgeeks.org/problems/matrix-interchange-java/1/?track=module-2-arrays-and-strings-java&batchId=114#

// { Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;


 // } Driver Code Ends
//User function Template for Java

/*Class Geeks with its member function interchange()
* a[][] = matrix input
* r : number of rows
* c : number of columns
*/
class Geeks{
    
    static void interchange(int a[][],int r, int c){
        
        // Your code here
        for(int i = 0;i<r;i++){
            int temp=a[i][0];
            a[i][0]=a[i][c-1];
            a[i][c-1]=temp;
        }
        
        
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                System.out.print(a[i][j] + " ");
            }
            System.out.println();
        } 
    }
}

// { Driver Code Starts.

// Driver class
class GFG {
    
    // Driver code
	public static void main (String[] args) {
	    
	    // Taking input using scanner class
		Scanner sc = new Scanner(System.in);
		
		//taking total testcases
		int testcase = sc.nextInt();
		
		while(testcase-- > 0){
		    
		    //taking row and column count
		    int rows = sc.nextInt();
            int cols = sc.nextInt();
            
            //creating a 2d-array 
		    int a[][] = new int[rows][cols];
		    
		    //adding elements to the 2d-array
		    for(int i = 0;i<rows;i++){
		        for(int j = 0;j<cols;j++){
		            a[i][j] = sc.nextInt();
		        }
		    }
		    
		    //creating an object of class Geeks
		    Geeks obj = new Geeks();
		    
		    //calling interchange() method 
		    //of class Geeks
		    obj.interchange(a, rows, cols);
		}
	}
}  // } Driver Code Ends