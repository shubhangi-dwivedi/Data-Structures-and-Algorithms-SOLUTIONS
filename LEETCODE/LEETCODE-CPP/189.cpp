//189. Rotate Array
//https://leetcode.com/problems/rotate-array/

//Method - 1
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

//Method - 2 
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size(), temp[n];
        int x=k%n;

        for(int i=0;i<x;i++)
            temp[i]=nums[n-x+i];

        for(int i=x;i<n;i++)
            temp[i]=nums[i-x];

        for(int i=0;i<n;i++)
            nums[i]=temp[i];

    }
};