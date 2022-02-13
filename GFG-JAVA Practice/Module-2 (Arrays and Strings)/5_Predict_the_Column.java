//5. Predict the Column - Java
//https://practice.geeksforgeeks.org/problems/predict-the-column-java/1/?track=module-2-arrays-and-strings-java&batchId=114#

// { Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;


 // } Driver Code Ends
//User function Template for Java

/*Class Geeks with its member function columnWithMaxZero()
* a[][] = matrix input
* n : number of rows and columns each
*/
class Geeks{
    
    static int columnWithMaxZero(int a[][],int n){
        
        // Your code here
        int max_c=0,c_no=-1;
        
        for(int j=0;j<n;j++){
            int count=0;
            
            for(int i=0;i<n;i++)
                if(a[i][j]==0)
                    count++;
            
            if(count>max_c){
                max_c=count;
                c_no=j;
            }
        }
        
        return c_no;
    }
}

// { Driver Code Starts.

// Driver class
class GFG {
    
    // Driver code
	public static void main (String[] args) {
	    // Taking input using scanner class
		Scanner sc = new Scanner(System.in);
		
		//taking testcases
		int testcase = sc.nextInt();
		
		while(testcase-- > 0){
		    
		    //taking size of 2d-array
		    int n = sc.nextInt();

            //creating a 2d-array
		    int a[][] = new int[n][n];
		    
		    //adding elements to the array
		    for(int i = 0;i<n;i++){
		        for(int j = 0;j<n;j++){
		            a[i][j] = sc.nextInt();
		        }
		    }
		    
		    //creating an object of Geeks clas
		    Geeks obj = new Geeks();
		    
		    //calling the method columnWithMaxZero()
		    //of class Geeks
		    System.out.println(obj.columnWithMaxZero(a, n));
		}
	}
}  // } Driver Code Ends