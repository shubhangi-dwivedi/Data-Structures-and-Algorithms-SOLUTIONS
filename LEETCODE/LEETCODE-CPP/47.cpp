//47. Permutations II
//https://leetcode.com/problems/permutations-ii/

//Method-1 using beacursion , backtracking & set
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>>s;
        vector<vector<int>> ans;

        helper(nums,s,0,n);
        ans={s.begin(),s.end()};

        return ans;
    }

    void helper(vector<int>& nums, set<vector<int>> &s,int idx, int n){
        if(idx==n){
            s.insert(nums);
            return;
        }

        for(int i=idx;i<n;i++){
            if(nums[i]==nums[idx] && i!=idx){
                continue;
            }
            else{
                swap(nums[idx],nums[i]);
                helper(nums,s,idx+1,n);
                swap(nums[idx],nums[i]);
            }
        }
    }
};