//848. Shifting Letters
//https://leetcode.com/problems/shifting-letters/

//Method-1 (similar to Suffix sum)
class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n=s.length();
        vector<int>suffSum(n,0);

        int sum=0;
        for(int i=n-1;i>=0;i--){
            sum=(sum+shifts[i])%26;

            int x=sum;
            while(x--){
                s[i]+=1;

                if(s[i]>'z'){
                    s[i]='a';
                }
            }
        }

        return s;

    }
};