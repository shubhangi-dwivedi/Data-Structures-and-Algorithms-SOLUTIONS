//1920. Build Array from Permutation

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> res;
        int n=nums.size();
        for(int i=0;i<n;i++)
            res.push_back(nums[nums[i]]);
        
        return res;
    }
};