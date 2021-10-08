//1512. Number of Good Pairs

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int count=0;
        
        for(int i=0;i<nums.size();i++)
            for(int j=0;j<nums.size();j++)
                if(i<j && nums[i]==nums[j])
                    count++;
        
        return count;
    }
};