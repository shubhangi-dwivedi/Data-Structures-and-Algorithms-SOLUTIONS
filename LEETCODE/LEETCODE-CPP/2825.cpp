//2825. Make String a Subsequence Using Cyclic Increments
//https://leetcode.com/problems/make-string-a-subsequence-using-cyclic-increments/

class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int m=str1.length(), n=str2.length();
        
        int i=0, j=0;
        
        while(i<m){
            if(j<n && (str2[j] - str1[i] + 26) % 26 <=1){
                i++, j++;
            }
            else{
                i++;
            }

        }

        //placing it outside if input is ""
        /*
        str1=""
        str2=""
        */
        if(j==n){
            return true;
        } 
        
        
        return false;
    }
};