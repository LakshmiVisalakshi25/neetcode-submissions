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
        int cnt=0;
        ListNode* temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        temp=head;
        ListNode* temp1=head;
        int n=(cnt+1)/2;
        for(int i=1;i<n;i++){
            temp=temp->next;
        }
        for(int i=1;i<=n;i++){
            temp1=temp1->next;
        }
        temp->next=NULL;
        ListNode* prev=NULL;
        while(temp1!=NULL){
            ListNode* front=temp1->next;
            temp1->next=prev;
            prev=temp1;
            temp1=front;
        }
        // while(prev!=NULL){
        //     cout << prev->val << " ";
        //     prev=prev->next;
        // }
        ListNode* t=head;
        ListNode* t1=prev;
        while(t!=NULL && t1!=NULL){
            ListNode* front=t->next;
            ListNode* front1=t1->next;
            t->next=t1;
            t1->next=front;
            t=front;
            t1=front1;
        }
        while(t1!=NULL){
            t->next=t1;
            t1=t1->next;
        }
    }
};
