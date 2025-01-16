//2425. Bitwise XOR of All Pairings
//https://leetcode.com/problems/bitwise-xor-of-all-pairings/description/

//Method-1 brute force
class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(), n=nums2.size();
        
        int xor1=0;
        int xor2=0;
        if(m%2==0){
            for(int i=0;i<m;i++){
                xor1^=nums1[i];
            }
        }

        if(n%2==0){
            for(int i=0;i<n;i++){
                xor2^=nums2[i];
            }
        }

        return xor1^xor2;

    }
};

//Method-2
class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        
        if(m%2==0 && n%2==0){
            return 0;
        }
        else if(m%2==0) {
            int ans=nums1[0];
            for(int i=1; i<m; i++){
                ans^=nums1[i];
            }
            return ans;
        }

        else if(n%2==0){
            int ans=nums2[0];
            for(int i=1; i<n; i++) {
                ans^=nums2[i];
            }
            return ans;
        }
        else{
            int ans=nums1[0];
            for(int i=1; i<m; i++){
                ans^=nums1[i];
            }
            for(int i=0; i<n; i++){
                ans^=nums2[i];
            }
            return ans;
        }

    }
};