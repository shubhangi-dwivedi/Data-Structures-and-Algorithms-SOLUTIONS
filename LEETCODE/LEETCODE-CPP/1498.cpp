//1498. Number of Subsequences That Satisfy the Given Sum Condition
//https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/description/

//Method-1 (2-pointer & counting)
class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int n=nums.size(), mod=1e9+7;

        vector<int> numsSubsets(n,1);
        for(int i=1;i<n;i++){
            numsSubsets[i]=2*numsSubsets[i-1]%mod;
        }

        int start=0, end=n-1, count=0;
        while(start<=end){
            int sum=nums[start]+nums[end];

            if(sum<=target){
                count=(count+numsSubsets[end-start])%mod;
                start++;
            }
            else{
                end--;
            }
        }

        return count;
    }
};