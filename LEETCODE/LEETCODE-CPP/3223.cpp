//3223. Minimum Length of String After Operations
//https://leetcode.com/problems/minimum-length-of-string-after-operations

class Solution {
public:
    int minimumLength(string s) {
        int n=s.length();

        unordered_map<char,int>m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }

        for(auto &x:m){
            cout<<x.first<<","<<x.second<<endl;
            if(x.second>=3){
                while(x.second>2){
                    x.second-=2;
                }
            }
        }

        int res=0;
        for(auto &x:m){
            res+=x.second;
        }

        return res;
    }
};