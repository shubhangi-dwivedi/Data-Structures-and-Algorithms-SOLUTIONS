//599. Minimum Index Sum of Two Lists

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        
        int n1=list1.size(),n2=list2.size();
        vector<pair<int,string>> temp;
        
        unordered_map<string,int> m;
        for(int i=0;i<n1;i++)
            m[list1[i]]=i;
        
        int min_ans=INT_MAX;
        for(int i=0;i<n2;i++){
            if(m.find(list2[i])!=m.end()){
                temp.push_back({m[list2[i]]+i,list2[i]});
                min_ans=min(min_ans,m[list2[i]]+i);
            }
        }
        
        vector<string> res;
        
        for(auto i: temp)
            if(min_ans==i.first)
                res.push_back(i.second);
        
        return res;
    }
};