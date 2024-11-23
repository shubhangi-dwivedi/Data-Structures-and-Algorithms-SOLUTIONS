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


//Methos-2 using sort and two pointers
class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        int n=nums.size();
        int left=0, right=n/2,count=0;


        sort(nums.begin(),nums.end());

        //keeping left<n/2 so that we are not checking already indexes marked because of right
        while(right<n && left <n/2){
            if(2*nums[left]<=nums[right]){
                count++;
                left++;                
            }

            right++;
        }

        return 2*count;
    }
};
   
// 0 1 2 3 4
// 1,2,3,4,6
// i   j        0,2 (resp.)
//   i   j      1,3 (resp.)
//     i   j    2,4 (resp. )  
// x(wrong ans if n/2 condition is not considered as element at the i=2 is already visited prev. when i=0,j=2