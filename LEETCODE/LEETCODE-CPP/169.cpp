//169. Majority Element
//https://leetcode.com/problems/majority-element/

//Method-1 (time- O(N), space- O(N)) 
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int, int> m;
        
        for(int i=0 ; i<nums.size() ; i++)
            m[nums[i]]++;
        
        int count=0;
        
        for(auto i : m)
        {
            if(i.second>nums.size()/2)
            {
                count=1;
                
                return i.first;
            }
        }
        
        return -1;
    }
};


//Method-2 (time- O(NlogN), space-O(1))
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        return nums[n/2];
    }
};


//Method-3 (time- O(N), space-O(1))
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,maj_ele;
        
        for(int i=0;i<nums.size();i++)
            if(count)
                count+=(nums[i]==maj_ele? 1:-1);
            else{
                maj_ele=nums[i];
                count=1;
            }
        
        return maj_ele;
    }
};