//532. K-diff Pairs in an Array
//https://leetcode.com/problems/k-diff-pairs-in-an-array/


//Method-1 (using unordered-map) (time- O(n)) (space- O(n))
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;

        /*
        for(int i:nums)
            m[i]++;
        */
        
        int count=0;
        for(auto x:m){
            if(k==0){
                if(x.second>1)
                    count++;
            }
            else if(m.find(x.first+k)!=m.end())
                count++;
        }
        
        return count;
    }
};
