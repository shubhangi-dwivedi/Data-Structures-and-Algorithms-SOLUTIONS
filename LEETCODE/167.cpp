//167. Two Sum II - Input array is sorted


//method 1
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        vector<int>res;
        unordered_map<int,int>m;
        int n=numbers.size(),x,y;
        for(int i=0;i<n;i++)
        {
            
            if(m.find(target-numbers[i])!=m.end())
            {
                y=i+1;
                x=numbers[i];
                break;
            }
            m[numbers[i]]++;
        }
        
        for(int i=0;i<n;i++)
            if(numbers[i]==target-x)
            {    
                res.push_back(i+1);
                res.push_back(y);
                break;
            }
        
        return res;
        }
};


//method 2
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
         int n=numbers.size();
        vector <pair<int,int>> res(n);
        
        
        for(int i=0;i<n;i++)
            res[i]={numbers[i],i};
       
        
        vector<int> v;
        int j=n-1;
        for(int i=0;i<n;)
        {
            if(res[i].first+res[j].first==target)
            {
                v.push_back(res[i].second+1);
                v.push_back(res[j].second+1);
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