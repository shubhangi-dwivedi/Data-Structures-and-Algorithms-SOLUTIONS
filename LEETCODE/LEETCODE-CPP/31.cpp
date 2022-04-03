//31. Next Permutation
//https://leetcode.com/problems/next-permutation/

//Method-1
class Solution {
    public:
    void nextPermutation(vector<int>& nums) {
     int n=nums.size();
     int l,k;
        for( k=n-2;k>=0;k--)
            if(nums[k]<nums[k+1])
                break;
        
        if(k<0)
            reverse(nums.begin(),nums.end());
        else
        {
            for(l=n-1;l>k;l--)
                if(nums[l]>nums[k])
                    break;
            
            swap(nums[l],nums[k]);
            reverse(nums.begin()+k+1,nums.end());
        }
        
    }
};

//Method-2 (time complexity : O(n*n!))
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());   
    }
};