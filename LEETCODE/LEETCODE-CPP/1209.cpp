//1209. Remove All Adjacent Duplicates in String II
//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/

class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        string ans;
        for(int i=s.size()-1;i>=0;i--){ 
            if(st.size() && st.top().first == s[i]){
                st.push({s[i],st.top().second+1});
            }else{
                st.push({s[i],1});
            }
            
			//when the count become equals to k
            if(st.size() && st.top().second == k){
                while(st.top().second != 1){
                    st.pop();
                }
                st.pop();
            }
        }
        while(st.size()){
            ans += st.top().first;
            st.pop();
        }
        return ans;
    }
};