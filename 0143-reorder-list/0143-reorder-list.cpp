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
private:
    ListNode* reverse(ListNode* head){
        
        if(head == NULL || head -> next == NULL)
            return head;
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        
        while(curr != NULL){
            
            forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
            
        }
        
        return prev;
    }
    
    
    ListNode* calmid(ListNode* head){
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != NULL && fast -> next != NULL){
            
            slow = slow -> next;
            fast = fast -> next -> next;
            
        }
        
        return slow;
    }
    
    
public:
    void reorderList(ListNode* head) {
        
        ListNode* mid = calmid(head);
        ListNode* nhead = mid -> next;
        mid -> next = NULL;
        ListNode* rev = reverse(nhead);
        ListNode* forward;
        ListNode* backward;
        
        while(rev != NULL){
            
            forward = head -> next;
            backward = rev -> next;
            head -> next = rev;
            rev -> next = forward;
            head = forward;
            rev = backward;
            
        }
         
    }
};