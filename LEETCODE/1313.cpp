//1313. Decompress Run-Length Encoded List

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        vector<int> dl;
        
        for(int i=0;i<nums.size()-1;i+=2)
            for(int j=0;j<nums[i];j++)
                dl.push_back(nums[i+1]);
        
        return dl;
        
    }
};