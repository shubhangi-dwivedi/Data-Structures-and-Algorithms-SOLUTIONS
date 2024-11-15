//90. Subsets II
//https://leetcode.com/problems/subsets-ii/description/

//Method-1 using backtracking and recursion
class Solution {
    public:
        vector<vector<int>> subsetsWithDup(vector<int>& nums) {
            vector<vector<int>>ans;
            vector<int>temp;
            sort(nums.begin(),nums.end());
    
            helper(nums,ans,temp,0);
    
            return ans;
        }
    
        void helper(vector<int>&nums,vector<vector<int>> &ans, vector<int> &temp,int idx){
            ans.push_back(temp);
    
            for(int i=idx;i<nums.size();i++){
                if(i>idx && nums[i]==nums[i-1])
                    continue;
                temp.push_back(nums[i]);
                helper(nums,ans,temp,i+1);
                temp.pop_back();
            }
        }
    };