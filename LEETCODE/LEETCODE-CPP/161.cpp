//161. One Edit Distance
//https://leetcode.com/problems/one-edit-distance/description/

//Method-1 (Two pointers)
class Solution {
public:
    bool isOneEditDistance(string s, string t) {
        int m=s.length();
        int n=t.length();

        if(abs(m-n) == 1 and (m==0 or n==0)) return true;

        int i=0,j=0;
        int count=0;

        //insert
        if(m == n-1){
            while(i<m && j<n){
                if(s[i] == t[j]){
                    i++,j++;
                    continue;
                }
                j++;
            }

            if(i == n-1){
                return true;
            }
        }

        //delete
        else if(m == n+1){
            while(i<m && j<n){
                if(s[i] == t[j]){
                    i++,j++;
                    continue;
                }
                i++;
            }

            if(j==m-1){
                return true;
            }
        }

        //replace
        else if(m == n){
            while(i<m && j<n){
                if(s[i] != t[j]){
                    count++;
                }
                i++,j++;
            }

            if(count == 1){
                return true;
            }
        }

        return false;
    }
};