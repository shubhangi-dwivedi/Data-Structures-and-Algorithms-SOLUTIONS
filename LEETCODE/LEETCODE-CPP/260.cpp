//260. Single Number III


//not in constant space
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int n=nums.size();
        unordered_map<int,int> m;
        
        for(int i=0;i<n;i++)
            m[nums[i]]++;
        
        vector <int> res;
        int count=0;
        
        for(auto i: m)
        {
            if(i.second==1)
            {
                res.push_back(i.first);
                count++;
            }
            if(count==2)
                break;
        }
        
        return res;    
        
    }
};