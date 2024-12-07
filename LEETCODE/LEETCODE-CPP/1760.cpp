//1760. Minimum Limit of Balls in a Bag
//https://leetcode.com/problems/minimum-limit-of-balls-in-a-bag/

class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int n=nums.size();
        
        int start=1, end=INT_MIN, res=INT_MAX;
        
        for(int i=0;i<n;i++){
            end=max(end,nums[i]);
        }
        
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(helper(nums,maxOperations,mid)){
                res=min(res,mid);
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        
        return res;
    }
    
    bool helper(vector<int>& nums, int maxOperations, int currPenalty){
        int ops=0;
        
        for(int i=0;i<nums.size();i++){
            ops+=(nums[i]/currPenalty);
            
            //removing duplicate count for dividing element
            if(nums[i]%currPenalty==0){
                ops--;
            }
        }
        
        return ops<=maxOperations;
    }
};