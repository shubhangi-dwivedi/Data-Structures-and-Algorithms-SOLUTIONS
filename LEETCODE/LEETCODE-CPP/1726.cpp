//1726. Tuple with Same Product
//https://leetcode.com/problems/tuple-with-same-product/

class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n=nums.size(),ans=0;
        unordered_map<int,int>mp;

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int temp= nums[i]*nums[j];

                ans+=8*mp[temp];
                mp[temp]++;
            }
        }

        return ans;
    }
};