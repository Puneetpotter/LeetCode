/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == NULL || head -> next == NULL)
            return head;
        
        ListNode* curr = head -> next;
        ListNode* temp = head;

        while(curr != NULL){
            
            while(curr -> val == head -> val){
                
                curr = curr -> next;
                
                if(curr == NULL)
                    break;
                
            }
            
            head -> next = curr;
            head = head -> next;
            
        }
        
        return temp;
    }
};