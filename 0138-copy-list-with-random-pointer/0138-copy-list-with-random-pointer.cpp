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

class Solution {    
public:
    Node* copyRandomList(Node* head) {
        
        if(head == NULL)
            return head;
        
        unordered_map <Node*, Node*> m;
        
        Node* temp = head;
        Node* head1 = new Node(head -> val);
        
        m[head] = head1;
        
        while(head -> next != NULL){
            
            head1 -> next = new Node(head -> next -> val);
            
            head = head -> next;
            head1 = head1 -> next;
            
            m[head] = head1;
            
        }
        
        head = temp;
        
        while(head != NULL){
            
            m[head] -> random = m[head -> random];
            head = head -> next;
            
        }
        
        return m[temp];
    }
};