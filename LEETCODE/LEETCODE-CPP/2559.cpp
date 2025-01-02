//2559. Count Vowel Strings in Ranges
//https://leetcode.com/problems/count-vowel-strings-in-ranges

class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int m=words.size(), n=queries.size();

        vector<int> ans(n,0);

        vector<int> volCount(m,0);
        int count=0;
        for(int i=0;i<m;i++){
            string x=words[i];
            int j=x.length()-1;
            
            if((x[0] == 'a' || x[0] == 'e' || x[0] == 'i' || x[0] == 'o' || x[0] == 'u') && (x[j] == 'a' || x[j] == 'e' || x[j] == 'i' || x[j] == 'o' || x[j] == 'u')){
                    count++;
                }

            volCount[i]=count;
        }

        for(int i=0;i<n;i++){

            string x=words[queries[i][0]];
            int j=x.length()-1;

            if((x[0] == 'a' || x[0] == 'e' || x[0] == 'i' || x[0] == 'o' || x[0] == 'u') && (x[j] == 'a' || x[j] == 'e' || x[j] == 'i' || x[j] == 'o' || x[j] == 'u')){
                ans[i]=volCount[queries[i][1]]-volCount[queries[i][0]]+1;
            }
            else{
                ans[i]=volCount[queries[i][1]]-volCount[queries[i][0]];
            }
        }

        return ans;
    }
};