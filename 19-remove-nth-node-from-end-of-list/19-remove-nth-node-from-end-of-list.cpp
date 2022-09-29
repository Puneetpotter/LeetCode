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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        auto ptr= head;
        int size=1;
        while(ptr->next!=NULL){
            ptr=ptr->next;
            size++;
        }
        ptr=head;
        if(size==1)
            head=NULL;
        else if(size==n){
            auto temp=head;
            head=head->next;
        }
        else{
            int i=1;
            while(i!=size-n){
                i++;
                ptr=ptr->next;
            }
            auto temp=ptr->next->next;
            ptr->next=temp;
        }
        return head;
    }
};