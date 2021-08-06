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