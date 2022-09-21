//985. Sum of Even Numbers After Queries
//https://leetcode.com/problems/sum-of-even-numbers-after-queries/

class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        
        vector<int> res;
        int even=0;
        
        for(int i=0;i<nums.size();i++)
            if(nums[i]%2==0)
                even+=nums[i];
        
        for(int i=0;i<queries.size();i++){
            int x=nums[queries[i][1]];
            
            if(nums[queries[i][1]]%2==0)
                even-=x;
            
            nums[queries[i][1]]+=queries[i][0];
            
            if(nums[queries[i][1]]%2==0)
                even+=nums[queries[i][1]];
            
            res.push_back(even);
        }
        
        return res;
    }
};