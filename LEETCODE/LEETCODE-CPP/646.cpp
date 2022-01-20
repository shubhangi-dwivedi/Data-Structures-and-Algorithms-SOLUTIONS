//646. Maximum Length of Pair Chain
//https://leetcode.com/problems/maximum-length-of-pair-chain/

//Method-1 (DP solution {lis variation})  (TIME: o(n^2))
class Solution {
public:
    int findLongestChain(vector<vector<int>>& p) {
        sort(p.begin(),p.end());
        
        int n=p.size();
        vector<int> lis(n,1);
        
        for(int i=1;i<n;i++)
            for(int j=0;j<i;j++)
                if(p[i][0]>p[j][1])
                    lis[i]=1+lis[j];
        
        int max_len=lis[0];
        for(int i=1;i<n;i++)
            max_len=max(max_len,lis[i]);
        
        return max_len;
        
    }
};