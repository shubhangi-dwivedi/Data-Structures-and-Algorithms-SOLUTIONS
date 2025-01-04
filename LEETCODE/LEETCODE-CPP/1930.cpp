//1930. Unique Length-3 Palindromic Subsequences
//https://leetcode.com/problems/unique-length-3-palindromic-subsequences

//Method-1 (Brute Force TLE)
class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n=s.length();
        set<string>st;

        if(n<=2){
            return 0;
        }

        for(int i=0;i<n-1;i++){
            for(int j=n-1;j>i+1;j--){
                if(s[i]==s[j]){
                    int x=j-i-1;
                    int y=i;
                    while(x>0){
                        y++;
                        string temp="";
                        temp+=s[j];
                        temp+=s[y]+temp;
                        st.insert(temp);
                        x--;
                    }
                }
            }
        }

        return st.size();
    }
};