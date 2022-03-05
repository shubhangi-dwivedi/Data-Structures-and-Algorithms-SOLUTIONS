//1523. Count Odd Numbers in an Interval Range
//https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/

class Solution {
public:
    int countOdds(int low, int high) {
        int count=(high-low)/2;
        
        if(high%2==0 && low%2==0)
            return count;
        
        else
            count+=1;
        
        return count;
    }
};