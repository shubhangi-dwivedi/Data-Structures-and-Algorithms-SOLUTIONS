//338. Counting Bits
//https://leetcode.com/problems/counting-bits/

//Method-1 (Dp-solution)    (time complexity - O(N)     space complexity - O(N))
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1,0);
        
        for(int i=1;i<=n;i++)
            res[i]=res[i & (i-1)]+1;
        
        return res;
    }
};

//Method-2 (brute force)    (time complexity - O(nlogn))