//410. Split Array Largest Sum
//https://leetcode.com/problems/split-array-largest-sum/

class Solution {
public:
    bool canCut(const vector<int>& nums, int cuts, long long int max) {
        int curr=0;
        for(int i: nums) {
            if(i>max)
                return false;
            else if(curr+i<=max)
                curr+=i;
            else {
                cuts--;
                curr=i;
                if(cuts<0)
                    return false;
            }
        }
     return true;
    }
    
    int splitArray(vector<int>& nums, int m) {
        long long int low=0, high=0;
        for(int i: nums) {
            low=max(low, (long long int)i);
            high+=i;
        }
        while(low<high) {
            long long int mid=low+(high-low)/2;
            if(canCut(nums, m-1, mid))
                high=mid;
            else
                low=mid+1;
        }
     return low;
    }
};