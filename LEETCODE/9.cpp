//9. Palindrome Number

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        if(x>=0 && x<10)
            return true;
        
        int y=x;
        long int n=0;
        while(x)
        {
            n=n*10+x%10;
            x=x/10;
        }
        
        if(y==n)
            return true;
        else 
            return false;
    }
};