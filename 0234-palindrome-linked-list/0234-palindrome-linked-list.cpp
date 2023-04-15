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
    ListNode* calmid(ListNode* head){
        
     //   ListNode* slow = head;
        ListNode* fast = head -> next;
        
        while(fast != NULL and fast -> next != NULL){
            
            fast = fast -> next -> next;
            head = head -> next;
            
        }
        
        return head;
    }
    
    ListNode* reversehalf(ListNode* head){
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        
        while(curr != NULL){
            
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            
        }
        
        return prev;
    }
    
public:
    bool isPalindrome(ListNode* head) {
        
        ListNode* mid = calmid(head);
        
        mid -> next = reversehalf(mid -> next);
        
        ListNode* head1 = mid -> next;
        
        while(head1 != NULL){
            
            if(head -> val != head1 -> val)
                return false;
            
            head = head -> next;
            head1 = head1 -> next;
            
        }
        
        return true;
    }
};