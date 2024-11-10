//300. Longest Increasing Subsequence
//https://leetcode.com/problems/longest-increasing-subsequence/

//Method-1 (DP) (Time complexity - O(n^2))
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        
        int lis[n];
        
        int res=0;
        lis[0]=1;
        
        for(int i=1;i<n;i++){
            lis[i]=1;
            for(int j=0;j<i;j++)
                if(nums[j]<nums[i])
                    lis[i]=max(lis[i],lis[j]+1);
        }
            
        for(int i=0;i<n;i++)
            res=max(res,lis[i]);
            
            return res;
    }
        
};

//Method-2 DP
class Solution {
public:
    int dp[2505][2505];
    int lengthOfLIS(vector<int>& nums) {
        
        memset(dp,-1,sizeof(dp));
        int n=nums.size();
        
        return helper(nums,-1,0);
    }

    int helper(vector<int>& nums, int prev, int curr){
        //base case curr==n
        if(curr==nums.size()){
            return 0;
        }

        int ans1=0, ans2=0;

        if(dp[curr][prev+1]!=-1)
            return dp[curr][prev+1];

        //take curr ele
        if(prev==-1 || nums[curr]>nums[prev]){
            ans1= helper(nums,curr,curr+1)+1;
        }

        //don't take curr ele
        ans2= helper(nums,prev,curr+1);

        //return max of ans1 and ans2
        return dp[curr][prev+1]=max(ans1,ans2);
    }
};

//Method-2 (Binary Search) (Time complexity - O(nlogn))
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> tail;
        int len=1;
        
        tail.push_back(nums[0]); //tail[0]=nums[0]
        
        for(int i=1;i<n;i++){
            if(nums[i]>tail[len-1]){
                tail.push_back(nums[i]);
                len++;
            }
            else{
                int x= ceilIdx(tail,0,len-1,nums[i]);
                tail[x]=nums[i];
            }
        }
        
        return len;
    }
    
    int ceilIdx(vector<int> tail, int s, int e, int x){
        while(e>s){
            int m=s+(e-s)/2;
            
            if(tail[m]>=x)
                e=m;
            else
                s=m+1;
        }
        return e;
    }
};