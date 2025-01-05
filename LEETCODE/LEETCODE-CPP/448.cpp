//448. Find All Numbers Disappeared in an Array
//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

//Method-1 using two-pointers
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        vector<int> ans;
        
        int i=0,j=1;
        while(i<n || j<=n){
            if( i<n && nums[i]==j){
                while(i<n && nums[i]==j){
                    i++;
                }
            }
            else{
                ans.push_back(j);
            }
            j++;
        }
        
        return ans;
    }
};

//[1,2,2,3,3,4,7,8]


//Methos-2 using hashmap
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();

        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }

        vector<int> ans;
        for(int i=0;i<n;i++){
            if(freq.find(i+1)==freq.end()){
                ans.push_back(i+1);
            }
        }

        return ans;
    }
};

//Method-3 using set
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();

        unordered_set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }

        vector<int> ans;
        for(int i=0;i<n;i++){
            if(st.find(i+1)==st.end()){
                ans.push_back(i+1);
            }
        }

        return ans;
    }
};