//1930. Unique Length-3 Palindromic Subsequences
//https://leetcode.com/problems/unique-length-3-palindromic-subsequences

//Method-1 (Brute Force TLE)
class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n=s.length();
        set<string>st;

        if(n<=2){
            return 0;
        }

        for(int i=0;i<n-1;i++){
            for(int j=n-1;j>i+1;j--){
                if(s[i]==s[j]){
                    int x=j-i-1;
                    int y=i;
                    while(x>0){
                        y++;
                        string temp="";
                        temp+=s[j];
                        temp+=s[y]+temp;
                        st.insert(temp);
                        x--;
                    }
                }
            }
        }

        return st.size();
    }
};

//Method-2 (Marking indices - optimized)
class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int m=s.length();

        vector<vector<int>> charCount(26);

        for(int i=0;i<m;i++){
            charCount[s[i]-'a'].push_back(i);
        }

        int palCount=0;
        for(int i=0;i<26;i++){
            if(charCount[i].size()>1){

                int x=charCount[i][charCount[i].size()-1]-charCount[i][0]-1;
                
                vector<bool>vis(26,false);
                if(x>=1){
                    int a=charCount[i][0]+1;
                    int b=charCount[i][charCount[i].size()-1];
                    
                    while(a<b){
                        vis[s[a]-'a']=true;

                        a++;
                    }
                }

                for(int j=0;j<26;j++){
                    if(vis[j]==true){
                        palCount++;
                    }
                }
            }
        }

        return palCount;
    }
};