//451. Sort Characters By Frequency

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        priority_queue<pair<int,char>> q; //maxheap
        
        for(int i=0;i<s.length();i++)
            m[s[i]]++;
        
        for(auto i:m)
            q.push({i.second,i.first});
        
        string res="";
        while(!q.empty()){
            for(int i=q.top().first;i>0;i--)
                res+=q.top().second;
            
            q.pop();
        }
        return res;
    }
};
