//2381. Shifting Letters II
//https://leetcode.com/problems/shifting-letters-ii/description/

//Method-1 (Prefix Sum/ Line Sweep)
class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int m=s.length(), n=shifts.size();

        vector<int>rangeCount(m+1,0);
        vector<int>prefSum(m+1,0);

        for(int i=0;i<n;i++){
            if(shifts[i][2]==0){
                rangeCount[shifts[i][0]]+=-1;
                rangeCount[shifts[i][1]+1]+=1;
            }
            else{
                rangeCount[shifts[i][0]]+=1;
                rangeCount[shifts[i][1]+1]+=-1;
            }

        }

        int sum=0;
        for(int i=0;i<=m;i++){
            sum+=rangeCount[i];
            prefSum[i]=sum%26;
        }

        for(int i=0;i<m;i++){
            if(prefSum[i]<0){
                int x=prefSum[i];
                while(x++){
                    s[i]=s[i]-1;

                    if(s[i]<'a'){
                        s[i]='z';
                    }
                }
            }
            else if(prefSum[i]>0){
                int x=prefSum[i];
                while(x--){
                    s[i]=s[i]+1;

                    if(s[i]>'z'){
                        s[i]='a';
                    }
                }
            }
        }

        return s;
    }
};