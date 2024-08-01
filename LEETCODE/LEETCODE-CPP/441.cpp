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

//Method-2 (binary search)
class Solution {
public:
    int arrangeCoins(int n) {
        int low=1, high=n;

        while(low<=high){
            long mid=low+(high-low)/2;
            long long sum=(mid*(mid+1))/2;

            if(sum==n)
                return mid;
            else if(sum>n)
                high=mid-1;
            else
                low=mid+1;
        }

        return high;
    }
};