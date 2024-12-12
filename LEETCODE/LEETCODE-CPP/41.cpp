//41. First Missing Positive
//https://leetcode.com/problems/first-missing-positive/description/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n=nums.size();
        int target=1;

        for(int i=0;i<n;i++){
            if(nums[i]<1){
                continue;
            }

            if(nums[i]>0 && nums[i]==target){
                target++;
            }
            else if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            else{
                break;
            }
        }

        return target;
    }
};