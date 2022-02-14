//https://nados.io/question/all-indices-of-array

/*1. You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are given a number x. 
4. You are required to find the all indices at which x occurs in array a.
5. Return an array of appropriate size which contains all indices at which x occurs in array a.

Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

Constraints
1 <= n <= 10^4
0 <= n1, n2, .. n elements <= 10 ^ 3
0 <= x <= 10 ^ 3

Format
Input
A number n
n1
n2
.. n number of elements
A number x

Output
Return the array of indices from the allIndices function. Display is managed for you.

Example
Sample Input

6
15
11
40
4
4
9
4

Sample Output
3
4
*/

import java.util.*;

public class All_Indices_Of_Array {
    
    public static int[] find(int a[],int n,int i,int j,int k){
        if(i==n)
            return new int[j];

        if(a[i]==k){
            int[] b=find(a,n,i+1,j+1,k);
            b[j]=i;
            return b;
        }
        else{ 
            int[] b=find(a,n,i+1,j,k);
            return b;
        }
    } 

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();

        int a[]=new int [n];

        for(int i=0;i<n;i++)
            a[i]=sc.nextInt();

        int k=sc.nextInt();
        int[] b=find(a,n,0,0,k);
        for(int i=0;i<b.length;i++){
            System.out.print(b[i]+" ");
        }
    }
}