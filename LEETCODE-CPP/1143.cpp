//1143. Longest Common Subsequence

//Method-1 *TLE*  Time complexity = O(2^n) 
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int ptr1=0,ptr2=0;
        
        int ans=count(ptr1,ptr2,text1,text2);
        return ans;
    }
    
    int count(int ptr1, int ptr2, string t1, string t2){
        
        if(ptr1>=t1.length() || ptr2>=t2.length()){
            return 0;
        }
        
        if(t1[ptr1]==t2[ptr2])
            return 1+ count(ptr1+1,ptr2+1,t1,t2);
        else{
            int left= count(ptr1+1,ptr2,t1,t2);
            int right= count(ptr1,ptr2+1,t1,t2);
            
            return max(left,right);
        }
        
    }
};


//Method-2 (memoization/top-bottom) *TLE* time complexity= O(mn)
class Solution {
public:
   
    int longestCommonSubsequence(string t1, string t2) {
        
        int m=t1.length();
        int n=t2.length();
        vector<vector<int>> memo(m+1, vector<int> (n+1,-1));
        
        int res= calc(memo,t1,t2,m,n);
        
        return res;
    }
    
    int calc(vector<vector<int>> &memo,string t1, string t2, int m, int n){
        if(m==0 || n==0)
            return 0;
        
        if(memo[m][n]!=-1)
            return memo[m][n];
        else{
            if(t1[m-1]==t2[n-1])
                return memo[m][n]=1+calc(memo,t1,t2,m-1,n-1);
            else
                return memo[m][n]=max(calc(memo,t1,t2,m-1,n),
                               calc(memo,t1,t2,m,n-1));
        }
    }
};