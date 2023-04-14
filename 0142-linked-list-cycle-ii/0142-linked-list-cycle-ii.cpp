/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        // 1 - HashMap
        
        // 2 - Floyd FCD Algo
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        if(head == NULL || head -> next == NULL)
            return NULL;
        
        while(slow != NULL and fast != NULL){
            
            fast = fast -> next;
            
            if(fast != NULL)
                fast = fast -> next;
            
            slow = slow -> next;
            
            if(slow == fast){
                
                slow = head;
                
                while(slow != fast){
                    
                    slow = slow -> next;
                    fast = fast -> next;
                    
                }
                
                return slow;
            }
            
        }
        
        return NULL;
    }
};