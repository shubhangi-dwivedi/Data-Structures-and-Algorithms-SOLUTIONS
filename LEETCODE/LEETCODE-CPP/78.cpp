//78. Subsets
//https://leetcode.com/problems/subsets/description/

//Method-1 using backtracking & recursion
class Solution {
    public:
        vector<vector<int>> subsets(vector<int>& nums) {
            vector<vector<int>> ans;
            vector<int> temp;
    
            helper(nums,ans,temp,0);
    
            return ans;
        }
    
        void helper(vector<int>&nums,vector<vector<int>>&ans,vector<int>temp, int idx){
            ans.push_back(temp);
    
            for(int i=idx;i<nums.size();i++){
                temp.push_back(nums[i]);
                helper(nums,ans,temp,i+1);
                temp.pop_back();
            }
        }
    };