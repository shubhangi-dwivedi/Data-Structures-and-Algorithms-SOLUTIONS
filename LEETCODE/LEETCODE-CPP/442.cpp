//https://leetcode.com/problems/find-all-duplicates-in-an-array/description/
//442. Find All Duplicates in an Array


//Method-1 Not O(1) space
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

//Method-2 using sorting
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
        sort(nums.begin(), nums.end());

        for(int i=1;i<n;i++)
            if(nums[i]==nums[i-1])
                res.push_back(nums[i]);
        
        return res;
    }
};

//Method-3 marking the visited index
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;

        for(int i=0;i<n;i++){
            int k=abs(nums[i])-1;

            if(nums[k]<0)
                res.push_back(abs(nums[i]));
            else
                nums[k]*=-1;
        }
        
        return res;
    }
};