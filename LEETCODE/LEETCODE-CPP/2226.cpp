//2226. Maximum Candies Allocated to K Children
//https://leetcode.com/problems/maximum-candies-allocated-to-k-children/description/


//Method-1 (binary search on answer)
class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int low=1, n=candies.size() ,high=INT_MIN, ans=INT_MIN;

        long long sum=0;

        for(int i=0;i<n;i++){
            sum+=candies[i];
            high=max(high,candies[i]);

        }
        if(sum<k)
            return 0;

        while(low<=high){
            int mid = low + (high-low)/2;

            if(helper(candies, k , mid)){
                ans=max(ans,mid);
                low=mid+1;
            }
            else 
                high=mid-1;
        }

        return ans;
    }

    bool helper(vector<int>& candies, long long k, int pile){
        for(int i=0;i<candies.size();i++){
            int x=candies[i]/pile;

            k=k-x;

            if(k<=0)
                return true;
        }
         return false;
    }
};