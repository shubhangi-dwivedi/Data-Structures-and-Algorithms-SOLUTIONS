//540. Single Element in a Sorted Array
//https://leetcode.com/problems/single-element-in-a-sorted-array/

//Methos-1 (using XOR)
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int x=0, n=nums.size();

        for(int i=0;i<n;i++)
            x^=nums[i];

        return x;
    }
};