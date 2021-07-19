//1929. Concatenation of Array

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n1=nums.size(),n2=2*n1;
        
        vector<int> ans(n2,0);
        
        for(int i=0;i<n1;i++)
        {
            ans[i]=nums[i];
            ans[i+n1]=nums[i];
        }
        return ans;
    }
};