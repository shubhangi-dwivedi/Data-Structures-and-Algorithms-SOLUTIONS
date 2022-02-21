//303. Range Sum Query - Immutable
//https://leetcode.com/problems/range-sum-query-immutable/

class NumArray {
public:
    vector<int>arr;
    NumArray(vector<int>& nums) {
        arr=vector<int>(nums.size()+1);
        
        for(int i=0;i<nums.size();i++)
            arr[i+1]=arr[i]+nums[i];
    }
    
    int sumRange(int left, int right) {
        return arr[right+1]-arr[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */