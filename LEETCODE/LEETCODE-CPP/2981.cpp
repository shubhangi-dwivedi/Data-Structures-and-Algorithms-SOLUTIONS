//2981. Find Longest Special Substring That Occurs Thrice I
//https://leetcode.com/problems/find-longest-special-substring-that-occurs-thrice-i/

//Method-1 (Binary search on ans)
class Solution {
public:
    int maximumLength(string s) {
        int low=1, high=s.length()-2; // high is max length of a substring
        int ans= INT_MIN;

        while(low<=high){
            int mid= low+(high-low)/2;

            if(helper(s,mid)){
                ans=max(ans,mid);
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

        if(ans==INT_MIN)   
            return -1;

        return ans;
    }

    bool helper(string s, int mid){
        int n=s.length();
        map<string,int> mp;

        for(int i=0;i<n;i++){
            string x= s.substr(i, mid);

            mp[x]++;
            if(mp[x]>=3){
                set<char> s;
                for(int j=0;j<x.length();j++)
                    s.insert(x[j]);
                if(s.size()==1)
                    return true;
            }
        }
        return false;
    }
};

