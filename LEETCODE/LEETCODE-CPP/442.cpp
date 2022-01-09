//442. Find All Duplicates in an Array


//Not O(1) space
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++)
            m[nums[i]]++;
        
        vector<int> res;
        
        for(auto i:m)
            if(i.second==2)
                res.push_back(i.first);
        
        return res;
    }
};