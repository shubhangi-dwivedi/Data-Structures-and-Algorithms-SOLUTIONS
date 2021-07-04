//https://leetcode.com/problems/majority-element/
//Find majority element

class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int, int> m;
        
        for(int i=0 ; i<nums.size() ; i++)
            m[nums[i]]++;
        
        
        for(auto i : m)
            if(i.second>nums.size()/2)
                return i.first;
        
        return -1;
    }
};