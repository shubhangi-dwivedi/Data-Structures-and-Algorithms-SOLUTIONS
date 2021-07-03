//1672. Richest Customer Wealth

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        vector<int> v;
        int res;
        
        for(int i=0;i<accounts.size();i++)
        {
            res=0;
            for(int j=0;j<accounts[i].size();j++)
            {
                res+=accounts[i][j];
                v.push_back(res);
            }
        }
        
        res=*max_element(v.begin(),v.end());
        
        return res;
    }
};