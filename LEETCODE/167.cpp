//167. Two Sum II - Input array is sorted

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