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
        ListNode*temp=head,*prev=NULL;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        temp=head;
        int k=len-n+1;
        int count=1;
        while(count!=k){
            prev=temp;
            temp=temp->next;
            count++;
        }
        if(prev) prev->next=temp->next;
        else head=head->next;
        temp->next=NULL;
        delete(temp);
        return head;
    }
};
