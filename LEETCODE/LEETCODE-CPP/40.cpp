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


//Method-2 recursion and backtracking
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        sort(candidates.begin(), candidates.end());

        helper(candidates,ans,temp,target,0);

        return ans;
    }

    void helper(vector<int>& candidates, vector<vector<int>> &ans, vector<int> temp, int target, int idx){

        if(target==0){
            ans.push_back(temp);
            return;
        }

        for(int i=idx; i<candidates.size() ;i++){
            if(i>idx && candidates[i]==candidates[i-1]){
                continue;
            }

            if(candidates[i]>target)
                break;

            temp.push_back(candidates[i]);
            helper(candidates,ans,temp,target-candidates[i],i+1);
            temp.pop_back();
        }
    }
};