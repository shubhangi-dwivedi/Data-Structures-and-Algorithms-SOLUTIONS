//189. Rotate Array
//https://leetcode.com/problems/rotate-array/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        reverse(nums.begin(),nums.end());
        
        int n=nums.size();
        
        if(k>n)
            k=k%n;
        
        int i=0,j=k-1;
        
        while(i<j)
        {
            swap(nums[i],nums[j]);
            i++,j--;
        }
        
        reverse(nums.begin()+k,nums.end());
        
    }
};