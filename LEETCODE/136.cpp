//136. Single Number

//using unordered map
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        unordered_map <int, int> m;
        
        
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        
        for(auto i : m)
        {
            if(i.second==1)
                return i.first;
        }
        
        return -1;
    }
};

//using bit manipulation
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int res=nums[0];
        
        for(int i=1;i<n;i++)
            res^=nums[i];
        
        return res;
    }
};