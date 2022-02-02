//2006. Count Number of Pairs With Absolute Difference K
//https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/

//Method-1 (brute force)
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        
        int count=0,n=nums.size();
        
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(abs(nums[i]-nums[j])==k)
                    count++;
                    
        return count;
    }
};