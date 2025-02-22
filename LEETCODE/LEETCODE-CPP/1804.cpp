//1804. Implement Trie II (Prefix Tree)
//https://leetcode.com/problems/implement-trie-ii-prefix-tree/description/

class TrieNode{
    TrieNode* child[26];
    bool wordEnd=false;
    int countWord=0;
    int countPrefix=0;

    public:
    TrieNode() {
        for(int i=0;i<26;i++) {
            child[i]=NULL;  // Initialize all child pointers to NULL
        }
        // wordEnd=false;
        // countWord=0;
        // countPrefix=0;
    }

    bool containsKey(char ch){
        return (child[ch-'a']!=NULL);
    }

    TrieNode* get(char ch){
        return child[ch-'a'];
    }

    void put(char ch, TrieNode* node){
        child[ch-'a']=node;
    }

    void increaseWord(){
        countWord++;
    }

    void increasePrefix(){
        countPrefix++;
    }

    void deleteWord(){
        countWord--;
    }

    void deletePrefix(){
        countPrefix--;
    }

    int getWordCount(){
        return countWord;
    }

    int getPrefixCount(){
        return countPrefix;
    }
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root= new TrieNode();
    }
    
    void insert(string word) {
        TrieNode *node=root;

        for(int i=0;i<word.length();i++){
            if(!node->containsKey(word[i])){
                node->put(word[i], new TrieNode);
            }

            node=node->get(word[i]);
            node->increasePrefix();
        }

        node->increaseWord();
    }
    
    int countWordsEqualTo(string word) {
        TrieNode *node=root;

        for(int i=0;i<word.length();i++){
            if(node->containsKey(word[i])){
                node=node->get(word[i]);
            }
            else{
                return 0;
            }
        }

        return node->getWordCount();
    }
    
    int countWordsStartingWith(string prefix) {
        TrieNode *node=root;

        for(int i=0;i<prefix.length();i++){
            if(node->containsKey(prefix[i])){
                node=node->get(prefix[i]);
            }
            else{
                return 0;
            }
        }

        return node->getPrefixCount();
    }
    
    void erase(string word) {
        TrieNode *node=root;

        for(int i=0;i<word.length();i++){
            if(node->containsKey(word[i])){
                node=node->get(word[i]);

                node->deletePrefix();
            }
            else{
                return;
            }
        }

        node->deleteWord();
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * int param_2 = obj->countWordsEqualTo(word);
 * int param_3 = obj->countWordsStartingWith(prefix);
 * obj->erase(word);
 */