//https://nados.io/question/get-subsequence

/*
1. You are given a string str.
2. Complete the body of getSS function - without changing signature - to calculate all subsequences of str.
Use sample input and output to take idea about subsequences.

Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is.
Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

Constraints
0 <= str.length <= 20

Format
Input
A string str

Output
Contents of the arraylist containing subsequences as shown in sample output

Example
Sample Input

abc

Sample Output
[, c, b, bc, a, ac, ab, abc]
*/

import java.util.*;

public class Get_Subsequence {
    public static ArrayList<String> subseq(String s){
        if(s.length()==0){
            ArrayList<String> res=new ArrayList<>();
            res.add("");
            return res;
        }
        
        char c=s.charAt(0);
        String str=s.substring(1);
        ArrayList<String> rres= subseq(str);

        ArrayList<String> mres=new ArrayList<>();
        for(String rstr:rres){
            mres.add(rstr);
            mres.add(c+rstr);
        }
        return mres;
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.next();

        ArrayList<String> a=subseq(s);

        System.out.println(a);
    }

}