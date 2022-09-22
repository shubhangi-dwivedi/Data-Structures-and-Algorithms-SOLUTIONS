//977. Squares of a Sorted Array
//https://leetcode.com/problems/squares-of-a-sorted-array/

//Method-1 (brute force)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {   
        for(int i=0 ; i<nums.size() ; i++)
            nums[i]=pow(nums[i],2);
        
        sort(nums.begin() , nums.end());
        
        return nums;
    }
};

//Method-2 (two pointers)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int start=0, n=nums.size(), end=n-1;
        vector<int> res(n,0);
        
        for(int i=n-1;i>=0;i--){
            if(abs(nums[start])>nums[end]){
                res[i]=pow(nums[start],2);
                start++;
            }
            else{
                res[i]=pow(nums[end],2);
                end--;
            }
        }
        return res;
    }
};