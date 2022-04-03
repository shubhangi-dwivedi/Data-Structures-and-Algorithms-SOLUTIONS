//680. Valid Palindrome II
//https://leetcode.com/problems/valid-palindrome-ii/

class Solution {
public:
    bool validPalindrome(string s) {
        int l=s.length(), count=0;
        
        return check(s,count,0,l-1);
    }
    
    bool check(string s,int count, int i,int j){
        while(i<=j){
            if(s[i]!=s[j]){
                
                if(count==0){
                    count++;
                    return check(s,count,i+1,j) || check(s,count,i,j-1);
                }
                else
                    return false;
            }
            else
                i++,j--;
        }
        
        return true;
    }
};