//581. Shortest Unsorted Continuous Subarray
//https://leetcode.com/problems/shortest-unsorted-continuous-subarray/

//Method-1 brute force
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


//Method-2 brute force
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size(),left=-1,right=-1;
        vector<int>temp=nums;
        sort(temp.begin(),temp.end());

        for(int i=0;i<n;i++){
            if(temp[i]!=nums[i]){
                if(left==-1){
                    left=i;
                }
                right=i;
            }
        }

        return left==-1?0:(right-left+1);
    }
};


//Method-3 optimized
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size(),left=-1,right=-1,leastEle=INT_MAX,maxEle=INT_MIN;
        
        for(int i=n-1;i>=0;i--){
            leastEle=min(leastEle,nums[i]);
            if(leastEle!=nums[i]){
                left=i;
            }
        }

        for(int i=0;i<n;i++){
            maxEle=max(maxEle,nums[i]);
            if(maxEle!=nums[i]){
                right=i;
            }    
        }

        return left==right?0:(right-left+1);
    }
};