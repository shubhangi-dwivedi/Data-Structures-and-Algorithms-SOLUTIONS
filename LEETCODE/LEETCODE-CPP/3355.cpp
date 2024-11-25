//3355. Zero Array Transformation I
//https://leetcode.com/problems/zero-array-transformation-i/

//Method-1 Brute force (TLE) TC:O(n1*n2)
class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n1=nums.size(), n2=queries.size();
        
        for(int i=0;i<n2;i++){
            int j=0;
            while(j<n1){
                if(j>=queries[i][0] && j<=queries[i][1] && nums[j]!=0){
                    nums[j]--;
                }
                j++;
            }
        }
        
        for(int i=0;i<n1;i++){
            if(nums[i]!=0){
                return false;
            }
        }
        
        return true;
    }
};