//2270. Number of Ways to Split Array
//https://leetcode.com/problems/number-of-ways-to-split-array/

//Method-1 (prefx & suffix sum)
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();

        vector<long>prefSum(n,0);
        vector<long>suffSum(n,0);

        long sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            prefSum[i]=sum;
        }

        sum=0;
        for(int i=n-1;i>0;i--){
            sum+=nums[i];
            suffSum[i]=sum;
        }
        
        int splitCount=0;
        for(int i=0;i<n-1;i++){
            if(prefSum[i]>=suffSum[i+1]){
                splitCount++;
            }
        }

        return splitCount;
    }
};