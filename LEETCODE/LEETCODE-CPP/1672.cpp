//1672. Richest Customer Wealth
//https://leetcode.com/problems/richest-customer-wealth/

//Method-1
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

//Method-2
class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
     
        int ans=INT_MIN;
        
        for(int i=0;i<acc.size();i++){
            int sum=0;
            
            for(int j=0;j<acc[0].size();j++)
                sum+=acc[i][j];
                
            ans=max(ans,sum);
        }
        
        return ans;
    }
};