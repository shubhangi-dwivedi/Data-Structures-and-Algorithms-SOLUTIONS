//2364. Count Number of Bad Pairs
//https://leetcode.com/problems/count-number-of-bad-pairs/

//Method-1 brute force
class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long ans=0, n=nums.size();;

        for(long long i=0;i<n-1;i++){
            for(long long j=i+1;j<n;j++){
                if(j-i !=nums[j]-nums[i]){
                    ans++;
                }
            }
        }

        return ans;
    }
};


//Method-2 using map
class Solution {
    public:
        long long countBadPairs(vector<int>& nums) {
            long long goodPairs=0, n=nums.size();
            unordered_map<int,int> freq;
    
            for(long long i=0;i<n;i++){
                int temp=nums[i]-i;
                goodPairs+=freq[temp];
                freq[temp]++;
    
            }
    
            return (n*(n-1))/2 - goodPairs;
        }
    };