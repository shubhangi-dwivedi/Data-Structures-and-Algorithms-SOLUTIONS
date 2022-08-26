//869. Reordered Power of 2
//https://leetcode.com/problems/reordered-power-of-2/

class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string n_str=to_string(n);
        sort(n_str.begin(),n_str.end());
        
        //as there are only 30 values of power of 2 that lies b/w 1 <= n <= 109
        for(int i=0;i<30;i++){
            int x=pow(2,i);
            
            string x_str=to_string(x);
            sort(x_str.begin(),x_str.end());
            
            if(n_str==x_str)
                return true;
        }
        
        return false;
    }
};