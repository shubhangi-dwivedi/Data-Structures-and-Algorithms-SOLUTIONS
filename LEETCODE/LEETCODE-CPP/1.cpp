//1. Two Sum


//method 1
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector <int> res;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if((nums[i]+nums[j])==target)
                {
                    res.push_back(i);
                    res.push_back(j);
                    break;
                }
            }
        }
        
        return res;
    }
};


//method 2
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n=nums.size();
        vector <pair<int,int>> res(n);
        
        for(int i=0;i<n;i++)
            res[i]={nums[i],i};
        
        sort(res.begin(),res.end());
        
        vector<int> v;
        int i=0,j=n-1;
        while(j>i)
        {    if(res[i].first+res[j].first==target)
            {
                v.push_back(res[i].second);
                v.push_back(res[j].second);
                break;
            }
            else if(res[i].first+res[j].first>target)
                j--;
            else
                i++;
        }
        
        return v;
    }
};


//method 3
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n=nums.size();
        map<int,int>m;
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                v.push_back(i);
                v.push_back(m[target-nums[i]]);
            }
            m[nums[i]]=i;
        }
        return v;
    }
};