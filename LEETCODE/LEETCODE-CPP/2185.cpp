//2185. Counting Words With a Given Prefix
//https://leetcode.com/problems/counting-words-with-a-given-prefix

//Method-1 brute force (using string fubction starts_with())
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=words.size();
        int count=0;

        for(int i=0;i<n;i++){
            count+=words[i].starts_with(pref);
        }

        return count;
    }
};