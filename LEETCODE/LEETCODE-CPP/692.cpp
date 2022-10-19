//692. Top K Frequent Words
//https://leetcode.com/problems/top-k-frequent-words/description/

struct compare{
    bool operator() (pair<int, string> a, pair<int, string> b) {
        if(a.first == b.first)
            return a.second > b.second;
        else
            return a.first < b.first;
    }
};

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> m;
        for(int i=0;i<words.size();i++)
            m[words[i]]++;

        priority_queue<pair<int,string>, vector<pair<int,string>>, compare> q;
        for(auto p:m)
            q.push({p.second, p.first});

        vector<string> res;
        while(k--){
            res.push_back(q.top().second);
            q.pop();
        }

        return res;
    }
};