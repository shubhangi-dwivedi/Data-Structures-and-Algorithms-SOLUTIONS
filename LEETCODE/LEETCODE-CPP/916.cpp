//916. Word Subsets
//https://leetcode.com/problems/word-subsets/description/

//Method-1 (counting frequency of chars)
class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> charCount(26,0);
        for(auto &word:words2){
            vector<int> currFreq(26,0);
            for(char ch:word){
                currFreq[ch-'a']++;
            }
            for(int i=0; i<26; i++) {
                charCount[i]=max(charCount[i], currFreq[i]);
            }
        }

        vector<string>ans;
        for(auto &word:words1){
            vector<int> currFreq(26,0);
            for(char ch:word){
                currFreq[ch-'a']++;
            }
            
            bool flag=true;
            for(int i=0;i<26;i++){
                if(currFreq[i]<charCount[i]){
                    flag=false;
                    break;
                }
            }

            if(flag){
                ans.push_back(word);
            }
        }

        return ans;
    }
};