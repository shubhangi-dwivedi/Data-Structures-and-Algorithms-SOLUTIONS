//1408. String Matching in an Array
//https://leetcode.com/problems/string-matching-in-an-array

//Method-1 brute force
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n=words.size();
        set<string>st;
        vector<string> ans;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && words[i].length()>=words[j].length()){
                    if(words[i].contains(words[j])){
                        st.insert(words[j]);
                    }
                }
            }
        }

        ans={st.begin(),st.end()};
        return ans;

    }
};