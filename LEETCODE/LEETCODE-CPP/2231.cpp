//2231. Largest Number After Digit Swaps by Parity
//https://leetcode.com/problems/largest-number-after-digit-swaps-by-parity/

class Solution {
public:
    int largestInteger(int num) {
        priority_queue<char>evenDigits;
        priority_queue<char>oddDigits;

        string s= to_string(num);
        int temp, n=s.length();
        for(int i=0;i<n;i++){
            int x=s[i]-'0';

            if(x%2==0)
                evenDigits.push('0'+x);
            else
                oddDigits.push('0'+x);
        }

        string ans="";
        for(int i=0;i<n;i++){
            int x=s[i]-'0';
            if(x%2==0){
                ans+=evenDigits.top();
                evenDigits.pop();
            }
            else{
                ans+=oddDigits.top();
                oddDigits.pop();
            }
        }

        return stoi(ans);

    }
};