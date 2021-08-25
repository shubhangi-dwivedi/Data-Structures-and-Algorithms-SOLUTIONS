class Solution {
public:
    
    int real(string n1){
        string r1;
        int i=0;
        while(n1[i]!='+'){
            r1+=n1[i];
            i++;
        }
        
        return stoi(r1);
    }
    
    int img(string n1){
        string i1;
        int i=0;
        while(n1[i]!='+'){
            i++;
        }
        
        i++;
        
        while(n1[i]!='i'){
            i1+=n1[i];
            i++;
        }
        
        return stoi(i1);
    }
    
    string complexNumberMultiply(string num1, string num2) {
        
        int r1,i1,r2,i2;
        r1=real(num1);
        r2=real(num2);
        i1=img(num1);
        i2=img(num2);
        
        string res="";
        
        res = to_string(r1*r2 - i1*i2) + "+" + to_string(r1*i2+r2*i1) + "i";
        
        return res;
    }
};