//2295. Replace Elements in an Array
//https://leetcode.com/problems/replace-elements-in-an-array/

//Method-1 using hashmap
class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int,int>mp;
        int m=nums.size(), n=operations.size();
        
        for(int i=0;i<m;i++){
            mp[nums[i]]=i;
        }
        
        for(int i=0;i<n;i++){
            mp[operations[i][1]]=mp[operations[i][0]];
            
            mp[operations[i][0]]=-1;
        }
        
        for(auto i: mp){
            if(i.second>=0){
                nums[i.second]=i.first;
            }
        }
        
        return nums;
    }
};