//1880. Check if Word Equals Summation of Two Words

class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        
        int temp1=0,temp2=0,temp3=0;
        
        char a[10]={'a','b','c','d','e','f','g','h','i','j'};
        
        for(int i=0;i<firstWord.length();i++)
            for(int j=0;j<10;j++)
                if(a[j]==firstWord[i])
                    temp1=temp1*10+j;
        
        for(int i=0;i<secondWord.length();i++)
            for(int j=0;j<10;j++)
                if(a[j]==secondWord[i])
                    temp2=temp2*10+j;
        
        for(int i=0;i<targetWord.length();i++)
            for(int j=0;j<10;j++)
                if(a[j]==targetWord[i])
                    temp3=temp3*10+j;
        
        if((temp1+temp2)==temp3)
            return true;
        
        else
            return false;
        
    }
};