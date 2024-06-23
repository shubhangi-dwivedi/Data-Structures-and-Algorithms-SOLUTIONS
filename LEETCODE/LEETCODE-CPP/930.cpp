//930. Binary Subarrays With Sum
//https://leetcode.com/problems/binary-subarrays-with-sum/description/

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


//Method-2 [Prefix Sum] (Time- O(n)) 
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefSum=0, res=0;
        unordered_map<int,int>freq;

        freq[0]=1;

        for(auto i:nums){
            //calculation prefix sum
            prefSum+=i; 

            //calculating subarrays
            //res=res + freq[prefSum-k]
            if(freq.find(prefSum-k)!=freq.end())
                res+=freq[prefSum-k];

            freq[prefSum]++;
        }

        //counts of subarrays
        return res;
    }
};

//Method-3 [Using 2 pointer / sliding window] (Time- O(n))
class Solution {
public:
    int atMost(vector<int>& nums, int goal){
        int i=0,j=0,ans=0,sum=0,n=nums.size();

        while(j<n){
            sum+=nums[j];
            
            while(sum>goal && i<=j){
                sum-=nums[i];
                i++;
            }

            ans+=j-i+1;
            j++;
        }

        return ans;
    }
        
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        //atMost(nums, goal) --> less than goal
        //atMost(nums, goal-1) -->less than goal -1
        return atMost(nums, goal)- atMost(nums,goal-1);
    }
};

