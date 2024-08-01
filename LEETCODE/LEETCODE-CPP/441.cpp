//441. Arranging Coins
//https://leetcode.com/problems/arranging-coins/

//Method-1 (brute force)
class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1)
            return 1;

        long count=0, sum=0;

        for(long i=1;i<=n;i++){
            if(sum>n)
                break;
            
            sum+=i;
            count++;
        }

        return count-1;
    }
};