//1. Count Odd Even - Java
//https://practice.geeksforgeeks.org/problems/count-odd-even-java/1/?track=module-2-arrays-and-strings-java&batchId=114#



// { Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

// Position this line where user code will be pasted.

class GFG {

    // Driver code
    public static void main(String[] args) {

        // Taking input using scanner class
        Scanner sc = new Scanner(System.in);

        // taking count of testcases
        int testcase = sc.nextInt();

        while (testcase-- > 0) {

            // taking size of arary
            int sizeof_array = sc.nextInt();

            // creating an array
            int a[] = new int[sizeof_array];

            // inserting elements in the array
            for (int i = 0; i < sizeof_array; i++) {
                a[i] = sc.nextInt();
            }

            // creating an object of class Geeks
            Geeks obj = new Geeks();

            // calling countOddEven() method
            // of class Geeks
            obj.countOddEven(a, sizeof_array);
            System.out.println();
        }
    }
}
// } Driver Code Ends


// User function Template for Java

/*Class Geeks with countOddEven() as its member function
* a : input array
* n : size of array
*/
class Geeks {
    static void countOddEven(int a[], int n) {

        // Your code here
    int even=0,odd=0;
    
    for(int i=0;i<n;i++){
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    
    System.out.print(odd+" "+even);
    }
}