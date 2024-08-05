//2053. Kth Distinct String in an Array
//https://leetcode.com/problems/kth-distinct-string-in-an-array/description/?envType=daily-question&envId=2024-08-05

//Methos-1 (using hashmap)
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n=arr.size();
        string ans="";

        unordered_map<string,int> m;

        for(int i=0;i<n;i++)
            m[arr[i]]++;

        for(int i=0;i<n;i++){
            if(m[arr[i]]==1){
                ans=arr[i];
                k--;
            }

            if(k==0)
                return ans;
        }


        return "";
    }
};