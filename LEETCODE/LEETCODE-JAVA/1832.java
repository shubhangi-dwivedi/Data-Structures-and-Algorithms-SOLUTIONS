//1832. Check if the Sentence Is Pangram
//https://leetcode.com/problems/check-if-the-sentence-is-pangram/description/

//Method-1 using string func.
class Solution {
    public boolean checkIfPangram(String sentence) {
        if(sentence.length()<26){
            return false;
        }

        for(char ch='a'; ch<='z'; ch++){
            if(sentence.indexOf(ch)<0){
                return false;
            }
        }

        return true;
    }
}

//Methos-2 using set
class Solution {
    public boolean checkIfPangram(String sentence) {
        if(sentence.length()<26){
            return false;
        }

        HashSet<Character> set= new HashSet<>();
        for(char c : sentence.toCharArray()){
            set.add(c);
        }

        return set.size()==26;
    }
}