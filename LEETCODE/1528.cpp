//1528. Shuffle String

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        string result_s=s;
        for(int i=0;i<indices.size();i++)
            result_s[indices[i]]=s[i];
        
        return result_s;
    }
};