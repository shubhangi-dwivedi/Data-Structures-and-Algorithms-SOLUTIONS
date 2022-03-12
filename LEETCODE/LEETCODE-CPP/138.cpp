//138. Copy List with Random Pointer
//https://leetcode.com/problems/copy-list-with-random-pointer/

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

//Method-1 (Time complexity : O(n),    space complexity : O(n))
class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*, Node*>m;
        Node* temp=head;    //for traversing
        
        //we'll go to each node and mke copy of it
        while(temp){
            Node *copy= new Node(temp->val);
            m[temp]=copy; //storing copy node address corresponding to temp
            
            temp=temp->next;
        }
        
        temp=head;
        //making connection for random & next
        while(temp){
           m[temp]->next=m[temp->next];    //m[temp] will give copy of temp and its next will equal to temp->next's copy
               
            m[temp]->random=m[temp->random];    //m[temp] will give copy of temp and its random will equal to temp->random's copy
            
            temp=temp->next;
        }
        
        return m[head];     //returning head's copy
    }
};