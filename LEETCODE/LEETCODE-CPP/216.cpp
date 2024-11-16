//216. Combination Sum III
//https://leetcode.com/problems/combination-sum-iii/

//Method-1 using recursion & backtracking
class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;

        helper(k,n,ans,temp,1);

        return ans;
    }

    void helper(int k, int n, vector<vector<int>> &ans, vector<int>&temp, int idx){
        if(k>9 || n<k){
            return;
        }
        if(k==0 && n==0){
            ans.push_back(temp);
            return;
        }

        for(int i=idx;i<=9;i++){
          
            temp.push_back(i);

            helper(k-1,n-i,ans,temp,i+1);
            temp.pop_back();
        }
    }
};