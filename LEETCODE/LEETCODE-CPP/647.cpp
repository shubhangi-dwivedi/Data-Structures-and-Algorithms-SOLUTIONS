//647. Palindromic Substrings
//https://leetcode.com/problems/palindromic-substrings/description/

//Method-1 Using Brute Force
class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        int count=0;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                
                if(isPal(s,i,j)){
                    count++;
                }
            }
        }

        return count;
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
    int countSubstrings(string s) {
        int n=s.size();
        int count=0;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                
                if(isPal(s,i,j)){
                    count++;
                }
            }
        }

        return count;
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


//Method-3 Using DP
class Solution {
public:
    int dp[1005][1005];
    int countSubstrings(string s) {
        int n=s.size();
        int count=0;
        memset(dp,-1,sizeof(dp));

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                
                if(isPal(s,i,j)){
                    count++;
                }
            }
        }

        return count;
    }

    bool isPal(string &temp, int i, int j){
        if(i>=j)
            return true;

        if(dp[i][j]!=-1)
            return dp[i][j];

        if(temp[i]==temp[j]){
            return dp[i][j]=isPal(temp, i+1, j-1);
        }

        return dp[i][j]=false;
    }

};