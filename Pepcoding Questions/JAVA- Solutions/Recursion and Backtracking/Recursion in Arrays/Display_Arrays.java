//https://nados.io/question/display-array

/*
1. You are given a number n, representing the size of array a.
2. You are given n numbers, representing elements of array a.
3. You are required to print the elements of array from beginning to end each in a separate line.
4. For the above purpose complete the body of displayArr function. Don't change the signature.

Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.                 

Constraints
1 <= n <= 30
0 <= n1, n2, .. n elements <= 10

Format
Input
A number n
n1
n2
.. n number of elements

Output
n1
n2
.. n elements

Example
Sample Input

5
3
1
0
7
5

Sample Output
3
1
0
7
5
*/

import java.util.*;

public class Display_Arrays {
    
    public static void display(int a[],int n,int i){
        if(i==n)
            return;

        System.out.print(a[i]+" ");

        display(a,n,i+1);
    } 

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();

        int a[]=new int [n];

        for(int i=0;i<n;i++)
            a[i]=sc.nextInt();

        display(a,n,0);
    }
}
