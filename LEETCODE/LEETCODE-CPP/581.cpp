//581. Shortest Unsorted Continuous Subarray
//https://leetcode.com/problems/shortest-unsorted-continuous-subarray/

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        int n = nums.size();
        int i=0, j= n-1;
        
        while(i<n and nums[i]==temp[i]){
            i++;
        }
    
        while(j>=0 and nums[j] == temp[j]){
            j--;
        }
        
        int ans = j-i;
        if(ans < 0) 
            return 0;
        return ans+1;
    }
};