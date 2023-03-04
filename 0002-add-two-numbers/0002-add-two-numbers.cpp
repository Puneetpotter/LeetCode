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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* end = NULL;
        ListNode* head = new ListNode(0, end);
        ListNode* temp = head;
        
        int carry = 0;
        
        while(l1 != NULL and l2 != NULL){
            
            int sum = 0;
            sum = l1 -> val + l2 -> val + carry;
            
            ListNode* temp1 = new ListNode((sum % 10), end);
            temp -> next = temp1;
            
            carry = sum / 10;
            
            temp = temp -> next;
            
            l1 = l1 -> next;
            l2 = l2 -> next;
            
        }
        
        while(l1){
            
            int sum = 0;
            sum = l1 -> val + carry;
            
            ListNode* temp1 = new ListNode((sum % 10), end);
            temp -> next = temp1;
            
            carry = sum / 10;
            
            temp = temp -> next;
            
            l1 = l1 -> next;
            
        }
        
        while(l2){
            
            int sum = 0;
            sum = l2 -> val + carry;
            
            ListNode* temp1 = new ListNode((sum % 10), end);
            temp -> next = temp1;
            
            carry = sum / 10;
            
            temp = temp -> next;
            
            l2 = l2 -> next;
            
        }
        
        if(carry > 0){
            ListNode* temp1 = new ListNode(carry, end);
            temp -> next = temp1;
        }
        
        return head -> next;
    }
};