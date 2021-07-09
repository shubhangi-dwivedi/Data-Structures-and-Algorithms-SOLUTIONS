//1791. Find Center of Star Graph


//using unordered map
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int> m;
        
        int n1=edges.size();
        for(int i=0;i<n1;i++)
        {
                m[edges[i][0]]++;
                m[edges[i][1]]++;
        }
        
        int m1=m.size();
        for(auto i: m)
            if(i.second==m1-1)
                return i.first;
        
        return -1;
    }
};