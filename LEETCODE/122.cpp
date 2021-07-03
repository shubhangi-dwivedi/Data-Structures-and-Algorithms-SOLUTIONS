//122. Best Time to Buy and Sell Stock II


//method 1
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size(),sum=0,diff=0;
        
        for(int i=0;i<n-1;i++)
        {
            diff=prices[i+1]-prices[i];
            if(diff>=0)
                sum+=diff;
        }
        
        return sum;
    }
};


//method 2
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size(),sum=0,diff=0;
        
        for(int i=1;i<n;i++)
            if(prices[i]>prices[i-1])
            {
                diff=prices[i]-prices[i-1];
                sum+=diff;
            }
        
        return sum;
    }
};