//258. Add Digits
//https://leetcode.com/problems/add-digits/

class Solution {
public:
    int addDigits(int num) {
       int n=0;
        
        while(num>0){
            int rem=num%10;
            n+=rem;
            num/=10;
            
            if(num==0 && n>9){
                num=n;
                n=0;
            }
        }
        
        return n;
    }
};


class Solution {
public:
    int addDigits(int num) {
       int n=0;
        
        if(num==0)
            return 0;
        
        if(num%9==0)
            return 9;
        
        return num%9;
    }
};