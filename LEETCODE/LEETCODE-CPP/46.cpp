//46. Permutations
//https://leetcode.com/problems/permutations/description/

//Method-1 recursion
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        helper(nums,n,0,ans);

        return ans;
    }

    void helper(vector<int>& nums, int n, int idx,vector<vector<int>>& ans){
        if(idx==n){
            ans.push_back(nums);
            return;
        }

        for(int j=idx;j<n;j++){
            swap(nums[idx],nums[j]);
            helper(nums,n,idx+1,ans);
            swap(nums[idx],nums[j]);

        }
         
    }
};