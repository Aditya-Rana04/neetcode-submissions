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
    void reorderList(ListNode* head) {
        ListNode* prev=head;
        ListNode*after=prev->next;
        while(after!=NULL and after->next!=NULL){
            ListNode*temp=head;
            ListNode*seclast=head;
            while(seclast->next->next!=NULL){
                seclast=seclast->next;
            }
            while(temp->next!=NULL){
                temp=temp->next;
            }
            prev->next=temp;
            temp->next=after;
            seclast->next=NULL;
            prev=after;
            after=after->next;
            
        }
        
       
    }
};
