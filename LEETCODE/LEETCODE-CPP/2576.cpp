//2576. Find the Maximum Number of Marked Indices
//https://leetcode.com/problems/find-the-maximum-number-of-marked-indices/

//Method-1 (binary search on ans)
class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        int low=0, n=nums.size(), high=n/2, ans=0;

        while(low<=high){
            int mid= low+(high-low)/2;
            if(helper(nums, mid,n)){
                ans=max(ans,2*mid);
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;

    }

    bool helper(vector<int>& nums, int ops, int n){
        int i=0, j=ops, res=0;
        sort(nums.begin(), nums.end());

        while(i<ops && j<=n-1){
            if(2*nums[i]<=nums[j]){
                res++;
                j++;
                i++;
            }
            else{
                j++;
            }

        }

        return res==ops;
    }
};
