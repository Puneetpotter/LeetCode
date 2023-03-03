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
    ListNode* mergeNodes(ListNode* head) {
        
        auto temp = head -> next;
        auto temp1 = head;
        auto temp2 = temp1;
        
        int sum = 0;
        
        while(temp != NULL){
            
            sum += temp -> val;
            
            if(temp -> val == 0){
                
                    temp1 -> val = sum;
                    temp2 = temp1;
                    temp1 = temp1 -> next;
                
                    sum = 0;
                
            }
            temp = temp -> next;
            
        }
        temp2 -> next = NULL;
        
        return head;
    }
};