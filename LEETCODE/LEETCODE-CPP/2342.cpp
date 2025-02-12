//2342. Max Sum of a Pair With Equal Sum of Digits
//https://leetcode.com/problems/max-sum-of-a-pair-with-equal-sum-of-digits/description/

class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int n=nums.size();

        /* size is 82 bcz largest number can be 999999999
            9+9+9+9+9+9+9+9+9=81
        */
        vector<int> currSum(82,-1);
        int ans=-1;

        for(int i=0;i<n;i++){
            int digiSum=0;
            int temp=nums[i];
            
            while(temp){
                digiSum+=temp%10;
                temp=temp/10;
            }

            if(currSum[digiSum]!=-1){
                ans=max(ans,nums[i]+currSum[digiSum]);
            }

            currSum[digiSum]=max(currSum[digiSum], nums[i]);
        }

        return ans;
    }
};