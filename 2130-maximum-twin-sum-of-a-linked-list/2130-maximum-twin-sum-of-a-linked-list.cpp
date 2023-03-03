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
    int pairSum(ListNode* head) {
        
        vector <int>num;
        int sum = 0;
        
        while(head){
            
            num.push_back(head -> val);
            head = head -> next;
            
        }
        
        int i = 0, j = num.size() - 1;
        
        while(i < j){
            
            if(sum < num[i] + num[j])
                sum = num[i] + num[j];
            
            i++;
            j--;
            
        }
        
        return sum;
    }
};