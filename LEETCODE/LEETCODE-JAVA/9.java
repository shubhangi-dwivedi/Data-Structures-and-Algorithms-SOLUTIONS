//9. Palindrome Number
//https://leetcode.com/problems/palindrome-number/

class Solution {
    public boolean isPalindrome(int x) {
        if(x<0){
            return false;
        }

        int n=x, rev=0;
        while(n!=0){
            int rem=n%10;
            n/=10;

            rev=rev*10+rem;
        }

        if(x==rev){
            return true;
        }

        return false;
    }
}