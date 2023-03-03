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
    int getDecimalValue(ListNode* head) {
        
        string num = "";
        int ans = 0;
        
        while(head){
            
            num.append(to_string(head -> val));
            head = head -> next;
            
        }
        
        int n = num.size();
        
        for(int i = n - 1;i >= 0; i--){
            
           if(num[i] == '1')
               ans += 1 << (n - i - 1);
               
            
        }
        
        
        return ans;
        
    }
};