//238. Product of Array Except Self
//https://leetcode.com/problems/product-of-array-except-self/description/

//Method-1 array using division
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(), prod1=1, count=0;

        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                prod1*=nums[i];
            }
            else{
                count++;
            }
        }

        for(int i=0;i<n;i++){
            if(count>1 || (nums[i]!=0 && count>0)){
                nums[i]=0;
            }

            else if(nums[i]==0 && count==1){
                nums[i]=prod1;
            }
            else if(nums[i]!=0 && count==0){
                nums[i]=prod1/nums[i];
            }
        }

        return nums;
    }
};

//Method-2 using prefix sum(int this case product)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n),prefix(n+1),suffix(n+1);
        prefix[0]=1;
        suffix[n-1]=1;
        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1]*nums[i-1];
            suffix[n-1-i] = suffix[n-i]*nums[n-i];
        }
        
        for(int i=0;i<n;i++){
            ans[i] = prefix[i]*suffix[i];
        }
        
        return ans;
        
    }
};