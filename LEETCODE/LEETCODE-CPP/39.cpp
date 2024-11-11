//39. Combination Sum
//https://leetcode.com/problems/combination-sum/description/?envType=problem-list-v2&envId=array

//Method-1 using recursion
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> ans;
        set<vector<int>>s;

        helper(candidates,ans,temp,target,0,candidates.size(),0);
        
        return ans;
    }

    void helper(vector<int>& candidates, vector<vector<int>>&ans,vector<int>temp, int target, int i, int n, int sum){
        if(i==n || target<sum)
            return;
        if(sum==target){
            ans.push_back(temp);
            return;
        }

        //not considering current element
        helper(candidates,ans,temp,target,i+1,n,sum);
    
        //considering current element
        temp.push_back(candidates[i]);
        helper(candidates,ans,temp,target,i,n,sum+candidates[i]);    
    }
};