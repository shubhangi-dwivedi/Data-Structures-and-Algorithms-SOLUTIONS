//1304. Find N Unique Integers Sum up to Zero

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        if(n==1)
        {
            v.push_back(0);
            return v;
        }
        
        int end=n-1;
        if(n%2!=0)
            v.push_back(0);
        for(int i=0;i<n/2;i++)
        {
            v.push_back(i+1);
            v.push_back(-(i+1));
        }
        
        return v;
    }
};