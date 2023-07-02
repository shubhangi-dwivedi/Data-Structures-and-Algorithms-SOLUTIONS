//744. Find Smallest Letter Greater Than Target
//https://leetcode.com/problems/find-smallest-letter-greater-than-target/description/


//Method -1 (using linear search) 
//time complexity - O(N), space complexity - O(1)
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        for(int i=0;i<letters.size();i++)
            if(letters[i]>target)
                return letters[i];
        
        return letters[0];
    }
};


//Method -2 (using ASCII code & linear search)
//time complexity - O(N), space complexity - O(1)
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int x=target-'0';

        for(int i=0;i<letters.size();i++)
            if(letters[i]-'0'>x)
                return letters[i];
        
        return letters[0];
    }
};


//Method -3 (using binary search)
//time complexity - O(logN), space complexity - O(1)
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i=0, j=letters.size()-1,mid=0;

        //checking is last element less than or equal to target return 0
        if(letters[j]<=target)
            return letters[0];

        //binary search
        while(i<=j){
            mid= i+(j-i)/2;

            if(letters[mid]>target) 
                j=mid-1;
            else
                i=mid+1;
        }

        return letters[i];
    }
};