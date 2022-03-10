//Date: 10/03/2022

//7 Segment Display 
//https://practice.geeksforgeeks.org/problems/7-segment-display0752/1#

//Method-1 (Greedy Approach)
// { Driver Code Starts
//Initial Template for Java
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int N = Integer.parseInt(read.readLine());
            String S = read.readLine();

            Solution ob = new Solution();
            System.out.println(ob.sevenSegments(S,N));
        }
    }
}// } Driver Code Ends


//User function Template for Java

class Solution {
    static String sevenSegments(String s, int n) {
        // code here
        int count[]={6, 2, 5, 5, 4, 5, 6, 3, 7, 5};
        int arr[]=new int[n];
        
        //counting segments for given number string
        int sum=0;
        for(int i=0;i<n;i++){
            int x=s.charAt(i)-'0';
            sum+=count[x];
        }
            
        //inserting 1 to every position
        for(int i=0;i<n;i++){
            arr[i]=2;
            sum-=2;
        }
        
        int k=0;
        //took 4 as limiting 
        while(k<n && sum>=4){
            arr[k]=6;   //inserting 0 to every pos
            sum+=2;     //adding segments of 1 as 1 is replaced by 0
            sum-=6;     //removing segments of 0
            
            k++;
        }
        
        arr[n-1]+=sum;  //Adding remaining segments at the last index
        
        String res="";
        for(int i=0;i<n;i++){

            //smallest digit for given no. of segments
            if(arr[i]==6)
                res+='0';
            else if(arr[i]==2)
                res+='1';
            else if(arr[i]==3)
                res+=7;
            else if(arr[i]==4)
                res+='4';
            else
                res+='2';   //arr[i]==5 i.e. 5 segments
        }
        
        return res;
    }
};