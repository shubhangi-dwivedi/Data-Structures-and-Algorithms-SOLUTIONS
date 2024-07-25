//2148. Count Elements With Strictly Smaller and Greater Elements 
//https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements/description/

class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n=nums.size(), count=n-2;

        if(n<=2)
            return 0;

        if(nums[0]==nums[n-1])
            return 0;

        for(int i=n-2;i>0;i--)
            if(nums[i]==nums[n-1])
                count--;
            else
                break;

        for(int i=1;i<n;i++)
            if(nums[i]==nums[0])
                count--;
            else
                break;

        
        
        return count;
    }
};