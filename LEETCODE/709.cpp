//709. To Lower Case

class Solution {
public:
    string toLowerCase(string str) 
    {
       transform( str.begin() , str.end() , str.begin() , ::tolower );
        
        return str;
    }
};