//2337. Move Pieces to Obtain a String
//https://leetcode.com/problems/move-pieces-to-obtain-a-string/

//Method-1 using two pointers
class Solution {
public:
    bool canChange(string start, string target) {
        int n=start.length();
        
        if(n==1 && start!=target){
            return false;
        }
        
        int i=0, j=0;
        
        while(i<n || j<n){
            while(i<n && start[i]=='_'){
                i++;
            }
            while(j<n && target[j]=='_'){
                j++;
            }
            
            if(i==n && j==n){
                return true;
            }
            else if(start[i]==target[j] && start[i]=='L' && i>=j){
                i++,j++;
            }
            else if(start[i]==target[j] && start[i]=='R' && i<=j){
                i++,j++;
            }
            else{
                // cout<<start[i]<<endl;
                return false;
            }
        }
        
        return true;
    }
};