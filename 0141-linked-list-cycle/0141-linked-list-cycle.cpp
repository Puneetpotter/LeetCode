/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if(head == NULL || head -> next == NULL)
            return false;
        
        unordered_map <ListNode*, int> m;
        
        while(head != NULL){
            
            if(m[head] != 0)
                return true;
            
            m[head]++;
            head = head -> next;
            
            
        }
        
        return false;
    }
};