//1929. Concatenation of Array


//method 1
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


//method 2
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n1=nums.size();
        
        for(int i=0;i<n1;i++)
            nums.push_back(nums[i]);
        
        return nums;
    }
};