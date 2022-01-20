//334. Increasing Triplet Subsequence
//https://leetcode.com/problems/increasing-triplet-subsequence/

class Solution {
    public:
        //Method-1 (binary search LIS solution) (time: O(nlogn))
        bool increasingTriplet(vector<int>& nums) {
            vector<int> tail;
            int len=1,n=nums.size();
            
            tail.push_back(nums[0]);
            
            for(int i=0;i<n;i++){
                if(nums[i]>tail[len-1]){
                    tail.push_back(nums[i]);
                    len++;
                }
                else{
                    int x=ceilIdx(tail,0,len-1,nums[i]);
                    tail[x]=nums[i];
                }
            }
            
            if(len>=3)
                return true;
            else
                return false;
        }
        
        int ceilIdx(vector<int> tail, int s, int e, int x){
            while(e>s){
                int m= s+(e-s)/2;
                
                if(tail[m]>=x)
                    e=m;
                else
                    s=m+1;
            }
            
            return e;
        }
    };