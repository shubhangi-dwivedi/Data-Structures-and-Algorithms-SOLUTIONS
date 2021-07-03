//1441. Build an Array With Stack Operations

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        vector<string> res;
        
        int ele=1;
        for(int i=0;i<target.size();i++)
        {
            while(target[i]!=ele)
            {
                res.push_back("Push");
                res.push_back("Pop");
                ele++;
            }
            
            res.push_back("Push");
            ele++;
        }
        
        return res;
        
    }
};