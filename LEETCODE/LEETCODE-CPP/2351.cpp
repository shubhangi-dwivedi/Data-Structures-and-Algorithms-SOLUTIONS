//2351. First Letter to Appear Twice
//https://leetcode.com/problems/first-letter-to-appear-twice/

class Solution {
public:
    char repeatedCharacter(string s) {
        int n=s.length(),i;
        set<char> st;

        for(i=0;i<n;i++){
            if(st.find(s[i])!=st.end())
                break;
            
            st.insert(s[i]);
        }

        return s[i];
    }
};