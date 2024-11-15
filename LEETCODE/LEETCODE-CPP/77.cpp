//77. Combinations
//https://leetcode.com/problems/combinations/description/

//Method-1 recursion & backtracking
class Solution {
    public:
        vector<vector<int>> combine(int n, int k) {
            vector<vector<int>> ans;
            vector<int>vec;
    
            helper(n,k,ans,vec,1);
    
            return ans;
        }
    
        void helper(int n, int k, vector<vector<int>> &ans, vector<int> vec, int idx){
            if(vec.size()==k){
                ans.push_back(vec);
            }
    
            for(int i=idx;i<=n;i++){
                vec.push_back(i);
                helper(n,k,ans,vec,i+1);
    
                vec.pop_back();
            }
    
        }
    
    };