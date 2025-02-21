//208. Implement Trie (Prefix Tree)
//https://leetcode.com/problems/implement-trie-prefix-tree/

class TrieNode {
public:
    TrieNode* child[26];
    bool wordEnd=false;
    
    bool containsKey(char ch){
        return (child[ch-'a']!=NULL);
    }

    void put(char ch, TrieNode* node){
        child[ch-'a']=node;
    }
    
    TrieNode* get(char ch){
        return child[ch-'a'];
    }

    void setEnd(){
        wordEnd=true;
    }

    bool isEnd(){
        return wordEnd;
    }
};

class Trie {
public:
TrieNode* root;
    Trie() {
        root= new TrieNode();
    }
    
    //O(word.length())
    void insert(string word) {
        TrieNode* node=root;

        for(int i=0;i<word.length();i++){
            if(!node->containsKey(word[i])){
                node->put(word[i], new TrieNode());
            }

            node=node->get(word[i]);
        }

        node->setEnd();
    }
    
    //O(word.length())
    bool search(string word) {
        TrieNode* node=root;

        for(int i=0;i<word.length();i++){
            if(!node->containsKey(word[i])){
                return false;
            }

            node=node->get(word[i]);
        }
        
        return node->isEnd();
    }
    
    //O(prefix.length())
    bool startsWith(string prefix) {
        TrieNode* node=root;

        for(int i=0;i<prefix.length();i++){
            if(!node->containsKey(prefix[i])){
                return false;
            }

            node=node->get(prefix[i]);
        }
        
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */