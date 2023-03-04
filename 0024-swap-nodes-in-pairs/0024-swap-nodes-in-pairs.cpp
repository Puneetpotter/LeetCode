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
    ListNode* swapPairs(ListNode* head) {
        
        ListNode* temp = head;
        ListNode* temp1 = temp;
        
        int data = 0;
        
        if(head == NULL or head -> next == NULL)
            return head;
        
        while(temp -> next != NULL){
            
            temp1 = temp -> next;
            data = temp1 -> val;
            temp1 -> val = temp -> val;
            temp -> val = data;
            
            temp = temp -> next -> next;
            
            if(temp == NULL)
                break;
        }
        
        return head;
    }
};