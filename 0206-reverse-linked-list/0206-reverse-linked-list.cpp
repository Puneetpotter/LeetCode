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
    ListNode* reverseList(ListNode* head) {
        
        if(head == NULL || head -> next == NULL)
            return head;
        
        ListNode* Previous = NULL;
        ListNode* Current = head;
        ListNode* Forward = NULL;
        
        
        while(Current != NULL){
            
            Forward = Current -> next;
            Current -> next = Previous;
            Previous = Current;
            Current = Forward;
            
        }
        
        return Previous;
    }
};