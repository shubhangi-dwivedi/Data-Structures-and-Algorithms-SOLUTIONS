//1748. Sum of Unique Elements

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0,n=nums.size();
        unordered_map<int,int>m;
        
        for(int i=0;i<n;i++)
            m[nums[i]]++;
        
        for(auto i:m)
            if(i.second==1)
                sum+=i.first;
        
        return sum;
    }
};