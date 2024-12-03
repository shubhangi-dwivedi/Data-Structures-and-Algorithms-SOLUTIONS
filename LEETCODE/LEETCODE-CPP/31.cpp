//31. Next Permutation
//https://leetcode.com/problems/next-permutation/

//Method-1 (2-pointers)
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k,l;
        int n=nums.size();
        
        //finding the pivot i.e. trending from where the increasing trend decreases
        for(k=n-2;k>=0;k--){
            if(nums[k]<nums[k+1]){
                break;
            }
        }
        
        //if no pivot (them the existing i/p has no next permutation)
        if(k<0){
            reverse(nums.begin(),nums.end());
        }
        else{
            //finding the element that is just greater than the nums[k]
            for(l=n-1;l>k;l--){
                if(nums[l]>nums[k]){
                    break;
                }
            }
            
            //swaping both elements
            swap(nums[k], nums[l]);
            
            //the resultant o/p may not be the next permutation so fixing it
            reverse(nums.begin()+k+1, nums.end());
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