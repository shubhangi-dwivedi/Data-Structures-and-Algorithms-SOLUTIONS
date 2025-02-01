//3151. Special Array I
//https://leetcode.com/problems/special-array-i/description/

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n=nums.size();
        int prev=nums[0];

        for(int i=1;i<n;i++){
            if(nums[i]%2==0 && prev%2!=0){
                prev=nums[i];
            }
            else if(nums[i]%2!=0 && prev%2==0){
                prev=nums[i];
            }
            else{
                return false;
            }
        }

        return true;
    }
};