//60. Permutation Sequence
//https://leetcode.com/problems/permutation-sequence/description/

//Method-1 recursion brute force
class Solution {
public:
    string getPermutation(int n, int k) {
        string s="";
        
        for(int i=1;i<=n;i++){
            s.push_back('0'+i);
        }

        priority_queue<string>pq;

        helper(s,pq,n,0,k);

        return pq.top();
    }

    void helper(string &s, priority_queue<string>& pq, int n, int idx, int k){
        if(idx==n){
            if(pq.size()!=k){
                pq.push(s);
            }
            else if(s<pq.top()){
                pq.pop();
                pq.push(s);
            }

            return;
        }
        
        for(int i=idx;i<n;i++){
            
            swap(s[idx],s[i]);
            helper(s,pq,n,idx+1,k);            
            swap(s[idx],s[i]);

        }
    }
};