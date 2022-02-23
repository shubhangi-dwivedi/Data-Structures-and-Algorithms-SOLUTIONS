//1218. Longest Arithmetic Subsequence of Given Difference
//https://leetcode.com/problems/longest-arithmetic-subsequence-of-given-difference/

//Method-1 [Dp solution (time - O(N), space - O(N))]
/*
For arr[i], arr[i] - difference is the previous number if there is an arithmetic subsequence exists which ends with arr[i]. 
Record the arithmetic subsequence length for each arr[i], for each arr[i] if found the previous arithmetic number arr[j], 
the len(arr[i]) = len(arr[j]) + 1 
*/
class Solution {
public:
    int longestSubsequence(vector<int>& arr, int diff) {
        int n=arr.size();
        unordered_map<int,int>m;
        int res=0;
        
        for(auto i:arr){
            if(m.count(i-diff)){
                m[i]=m[i-diff]+1;
            }
            else
                m[i]=1;
            
            res=max(res,m[i]);
        }
        return res;
    }
};