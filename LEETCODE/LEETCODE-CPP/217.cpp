//217. Contains Duplicate
//https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int,int> m;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
            m[nums[i]]++;
        
        for(auto i:m)
            if(i.second>1)
                return true;
        
        return false;
        
    }
};