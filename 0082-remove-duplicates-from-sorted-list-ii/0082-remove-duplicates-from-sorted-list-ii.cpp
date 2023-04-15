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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == NULL || head -> next == NULL)
            return head;
        
        unordered_map <int, int>m;
        
        ListNode* itit = (0, head);
        ListNode* it = head;
        ListNode* ans = NULL;
        
        int count = 0;
        
        while(head != NULL){
            
            m[head -> val]++;
            head = head -> next;
            
        }
        
        while(it != NULL){
            
            if(m[it -> val] == 1){
                
                count++;
                
                if(count == 1){
                    
                    ans = it;
                    itit = it;
                    
                    it = it -> next;
                    continue;
                    
                }
                
                itit -> next = it;
                itit = itit -> next;
                
            }
            
            it = it -> next;
            
            if(it == NULL)
                itit -> next = NULL;
            
        }
        
        return ans;
    }
};