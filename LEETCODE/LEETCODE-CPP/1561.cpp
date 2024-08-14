//1561. Maximum Number of Coins You Can Get
//https://leetcode.com/problems/maximum-number-of-coins-you-can-get/

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());

        int ans=0;
        int n=piles.size(), j=n-2;

        for(int i=0;i<n/3;i++){
            ans+=piles[j];
            j-=2;
        }

        return ans;
    }
};