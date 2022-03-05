//2160. Minimum Sum of Four Digit Number After Splitting Digits
//https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/

//Method-1 (Greedy approach)
class Solution {
public:
    int minimumSum(int num) {
        string s=to_string(num);
        
        sort(s.begin(),s.end());
        
        int n1=(s[0]-'0')*10 + (s[3]-'0') , n2=(s[1]-'0')*10 + (s[2]-'0');
        
        int n=n1+n2;
        
        return n;
    }
};