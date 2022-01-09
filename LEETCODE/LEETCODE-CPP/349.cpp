//349. Intersection of Two Arrays

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> s;
        vector<int> res;
        
        for(auto x: nums1)
            s.insert(x);
        
        for(auto y: nums2)
            if(s.find(y)!=s.end())
            {
                res.push_back(y);
                s.erase(y);
            }
        
        return res;
    }
};