//49. Group Anagrams
//https://leetcode.com/problems/group-anagrams/description/


//Method-1 using hashmap and sorting
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;
        if(n<0){
            return ans;
        }

        for(int i=0;i<n;i++){
            string temp=strs[i];

            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(temp);
        }

        for(auto i=mp.begin();i!=mp.end();i++){
            ans.push_back(i->second);
        }

        return ans;
    }
};