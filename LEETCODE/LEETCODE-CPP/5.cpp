//5. Longest Palindromic Substring
//https://leetcode.com/problems/longest-palindromic-substring/description/

//method-1 Brute Force
class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        string temp2="", res="";
        bool palMatch=false; 

        for(int i=0; i<n; i++){

            for(int j=i; j<n; j++){
                palMatch=isPal(s,i,j);

                if(palMatch){
                    temp2= s.substr(i,j-i+1);

                    if(res.length()<temp2.length())
                        res=temp2;
                }

            }
        }
        return res;
    }

    bool isPal(string &temp, int i, int j){
      while(i<=j){
            if(temp[i]==temp[j]){
                i++,j--;
            }
            else 
                return false;
        }

        return true;
    }
};


//Method-2 Using Recursion
class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();

        bool palMatch=false; 
        string res="";

        for(int i=0; i<n; i++){

            for(int j=i; j<n; j++){
                palMatch=isPal(s,i,j);

                if(palMatch==true){
                    string temp= s.substr(i,j-i+1);

                    if(res.length()<temp.length())
                        res=temp;
                }

            }
        }
        return res;
    }

    bool isPal(string &temp, int i, int j){
        if(i>=j)
            return true;

        if(temp[i]==temp[j]){
            return isPal(temp,i+1,j-1);
        }
        
        return false;

    }
};


//Method- 3 Using DP
class Solution {
public:
    int dp[1005][1005];
    string temp2="";

    string longestPalindrome(string s) {
        memset(dp,-1,sizeof(dp));
        int n=s.length();

        bool palMatch=false; 
        string res="";

        for(int i=0; i<n; i++){

            for(int j=i; j<n; j++){
                palMatch=isPal(s,i,j);

                if(palMatch){
                    temp2= s.substr(i,j-i+1);

                    if(res.length()<temp2.length())
                        res=temp2;
                }

            }
        }
        return res;
    }

    bool isPal(string &temp, int i, int j){
        if(i>=j)
            return true;

        if(dp[i][j]!=-1)
            return dp[i][j];

        if(temp[i]==temp[j]){
            return dp[i][j]= isPal(temp,i+1,j-1);
        }
        
        return dp[i][j]= false;

    }
};