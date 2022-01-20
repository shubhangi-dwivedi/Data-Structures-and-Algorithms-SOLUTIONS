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