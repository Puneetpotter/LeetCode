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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        ListNode* temp = head;
        int val = 0;
        
        while(temp != NULL and temp -> next != NULL){
            
            val = __gcd(temp -> val, temp -> next -> val);
            ListNode* temp1 = new ListNode(val, temp -> next);
            temp -> next = temp1;
            temp = temp -> next -> next;
            
        }
        
        return head;
    }
};