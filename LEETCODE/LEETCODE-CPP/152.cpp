//152. Maximum Product Subarray
//https://leetcode.com/problems/maximum-product-subarray/description/

//Method -1 Brute force
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN;
        for(int i = 0; i < size(nums); i++) {
            int curProd = 1;
            for(int j = i; j < size(nums); j++)
                curProd *= nums[j],
                ans = max(ans, curProd);
        }
        return ans;
    }
};

//Method -2 using prefix sum (optimized)
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int preMax=1, suffMax=1, res=INT_MIN, n=nums.size();

        for(int i=0;i<n;i++){
            if(preMax==0)
                preMax=1;
            if(suffMax==0)
                suffMax=1;

            preMax*=nums[i];
            suffMax*=nums[n-i-1];
            res= max(res, max(preMax, suffMax));
        }

        return res;

        

        return res;
    }

};