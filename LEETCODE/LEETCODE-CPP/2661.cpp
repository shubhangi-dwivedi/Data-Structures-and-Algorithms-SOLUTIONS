//2661. First Completely Painted Row or Column
//https://leetcode.com/problems/first-completely-painted-row-or-column/description/

//Method-1 keeping trach of nos. of col & rows left to column in resp. row & col
class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m=arr.size(), n1=mat.size(), n2=mat[0].size();
        unordered_map<int, pair<int,int>> mp; //storing r,c indexes of the value in mat
        vector<int> rowCount(n1,n2), colCount(n2,n1);
        //rowCount of no. of rows sizes store size of col in row
        //colCount of no. of cols sizes store size of row in col


        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                mp[mat[i][j]]={i,j};
            }
        }

        for(int i=0;i<m;i++){
            auto [r,c]=mp[arr[i]];

            if(--rowCount[r]==0 || --colCount[c]==0){
                return i;
            }
        }

        return -1;
    }
};