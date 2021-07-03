//217. Contains Duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int,int> m;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
            m[nums[i]]++;
        
        for(auto i:m)
            if(i.second>=2)
                return true;
        
        return false;
        
    }
};