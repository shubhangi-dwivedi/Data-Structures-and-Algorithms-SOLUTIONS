//1688. Count of Matches in Tournament


//Method 1
class Solution {
public:
    int numberOfMatches(int n) {
        
        int sum=0;
        
        while(n>1)
        {
            sum+=n/2;
            n=(n+1)/2;
        }
        
        return sum;
    }
};


//Method 2
class Solution {
public:
    int numberOfMatches(int n) {
        
        return n-1;
    }
};