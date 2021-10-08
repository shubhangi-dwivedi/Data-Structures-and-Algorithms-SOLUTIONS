//1207. Unique Number of Occurrences

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        map<int,int> m;
        for(int i=0;i<arr.size();i++)
            m[arr[i]]++;
        
        set<int> s;
        for(auto i: m)
            s.insert(i.second);
        
        return s.size()==m.size();
    }
};