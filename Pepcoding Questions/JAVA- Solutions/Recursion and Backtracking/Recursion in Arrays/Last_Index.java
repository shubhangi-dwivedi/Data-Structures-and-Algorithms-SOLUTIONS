//https://nados.io/question/last-index

/*
1. You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are given a number x. 
4. You are required to find the last index at which x occurs in array a.
5. If x exists in array, print the last index where it is found otherwise print -1.

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
A number representing last index of occurence of x in array a or -1 if not found at all.

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
4
*/

import java.util.*;

public class Last_Index {

    public static int idx(int a[], int i,int n,int k){
        if(i<0)
            return -1;
        
        int x=idx(a,i-1,n,k);

        if(a[i]==k)
            x=i;

        return x;
    }

    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();

        int a[]=new int [n];

        for(int i=0;i<n;i++)
            a[i]=sc.nextInt();

        int k=sc.nextInt();

        System.out.println(idx(a,n-1,n,k));
    }
}

