//560. Subarray Sum Equals K
//https://leetcode.com/problems/subarray-sum-equals-k/

//Method-1 (Time- O(n^2)) (TLE)
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0, count=0;
        
        for(int i=0;i<n;i++){
            sum=0;
            
            for(int j=i;j<n;j++){
                sum+=nums[j];
                if(sum==k){
                    count++;
                }
            }
        }
        
        return count;
    }
};


//Method-2 Prefix Sum (Time- O(n)) 
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefSum=0, res=0;
        unordered_map<int,int>freq;

        freq[0]=1;

        for(auto i:nums){
            //calculation prefix sum
            prefSum+=i; 

            //calculating suarrays
            //res=res + freq[prefSum-k]
            if(freq.find(prefSum-k)!=freq.end())
                res+=freq[prefSum-k];

            freq[prefSum]++;
        }

        //counts of subarrays
        return res;
    }
};