//387. First Unique Character in a String
//https://leetcode.com/problems/first-unique-character-in-a-string/

//Method-1 using hashmap
class Solution {
    public int firstUniqChar(String s) {
        char st[]=s.toCharArray();
        int n=s.length();

        HashMap<Character,Integer> m= new HashMap<>();

        for(char c:st){
            m.put(c,m.getOrDefault(c,0)+1);
        }

        for(int i=0;i<n;i++){
            if(m.get(st[i])==1){
                return i;
            }
        }

        return -1;
    }
}