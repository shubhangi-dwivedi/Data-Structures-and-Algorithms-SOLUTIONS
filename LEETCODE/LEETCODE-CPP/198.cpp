//198. House Robber
//https://leetcode.com/problems/house-robber/description/

//Method- 1 Brute Force
class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            
            if(i%2==0){
                sum1+=nums[i];
                if(sum1<sum2)
                    sum1=sum2;
            }
            else{
                sum2+=nums[i];
                if(sum2<sum1)
                    sum2=sum1;
            }
                
            
        }    
        return max(sum1,sum2);
    }
};


//Method -3 Recursion
class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size()-1;

        return helper(nums, n);
    }

    int helper(vector<int>& nums, int n){
        if(n<0)
            return 0;

        int sum1= helper(nums, n-2)+nums[n];
        int sum2= helper(nums, n-1);

        return max(sum1,sum2);
    }
};


//Method -3 DP
class Solution {
public:
    int dp[105];
    int rob(vector<int>& nums) {
        int n=nums.size()-1;
        memset(dp, -1, sizeof(dp));

        return helper(nums, n);
    }

    int helper(vector<int>& nums, int n){
        if(n<0)
            return 0;
        
        if(dp[n] != -1)
            return dp[n];

        int sum1= helper(nums, n-2)+nums[n];
        int sum2= helper(nums, n-1);

        return dp[n]=max(sum1,sum2);
    }
};