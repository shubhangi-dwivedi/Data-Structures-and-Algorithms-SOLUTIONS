//15. 3Sum
//https://leetcode.com/problems/3sum/

//Method -1 Using 2 pointers
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n=nums.size();

        sort(nums.begin(), nums.end());

        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            
            int j=i+1, k=n-1;
            while(j<k){
                int sum= nums[i]+nums[j]+nums[k];

                if(sum==0){
                    res.push_back({nums[i],nums[j],nums[k]});
                    j++;

                    while(nums[j]==nums[j-1] && j<k)
                        j++;
                }
                else if(sum<0)
                    j++;
                else
                    k--;
            }
        }

        return res;
    }
};