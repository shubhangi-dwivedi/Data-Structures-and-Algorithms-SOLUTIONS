//374. Guess Number Higher or Lower
//https://leetcode.com/problems/guess-number-higher-or-lower/description/

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

//Method-1 (Binary Search)
class Solution {
public:
    int guessNumber(int n) {
        int l=0,u=n;

        while(l<=u){
            int mid = l + (u-l)/2;
            int x = guess(mid);
            if(x==0)
                return mid;
            else if(1>x)
                u=mid-1;
            else
                l=mid+1;
        }

        return -1;
    }
};