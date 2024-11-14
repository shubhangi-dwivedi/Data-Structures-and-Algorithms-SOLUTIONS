//40. Combination Sum II
//https://leetcode.com/problems/combination-sum-ii/

//Method-1 Brute force recursion
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        set<vector<int>> s;
        vector<int> temp;
        int sum=0;
        sort(candidates.begin(), candidates.end());

        helper(candidates,s,temp,target,sum,0);
        ans={s.begin(),s.end()};

        return ans;
    }

    void helper(vector<int>& candidates, set<vector<int>> &s, vector<int> temp, int target, int sum, int i){
        if(i==candidates.size() || sum>target){
            if(target==sum){
                s.insert(temp);
                return;
            }
            return;
        }

        if(target==sum){
            s.insert(temp);
            return;
        }

        helper(candidates, s, temp, target, sum, i+1);

        temp.push_back(candidates[i]);
        helper(candidates, s, temp, target, sum+candidates[i], i+1);

    }
};