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
    ListNode* middleNode(ListNode* head) {
        
        auto temp = head;
        int length = 0;
        
        while(head != NULL){
            
            head = head -> next;
            length++;
            
        }
        
        int i = length/2;
        
        while(i--){
            
            temp = temp -> next;
            
        }
        
        return temp;
    }
};