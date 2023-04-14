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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        //base
        if(head == NULL)
            return NULL;
        
        //check if k nodes left
        ListNode* temp = head;
        
        int c = 1;
        
        while(temp -> next != NULL){
            
            temp = temp -> next;
            c++;
            
            if(c >= k)
                break;
            
        }
        
        //1
        //reverse first k-nodes
        ListNode*next = NULL;
        ListNode*curr = head;
        ListNode*prev = NULL;
        
        if(temp -> next == NULL and c < k)
            return curr;
        
        int count = 0;
        
        while(curr != NULL and count < k){
            
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            
            count++;
            
        }
        
        //2
        //recursion
        if(next != NULL){
            
            head -> next = reverseKGroup(next, k);
            
        }
        
        //3
        //return
        return prev;
    }
};