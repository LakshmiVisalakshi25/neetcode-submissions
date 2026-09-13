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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result=new ListNode(-1,NULL);
        ListNode* r=result;
        ListNode* temp=list1;
        ListNode* temp1=list2;
        while(temp!=NULL && temp1!=NULL){
            if(temp->val<temp1->val){
                ListNode* x=new ListNode(temp->val);
                r->next=x;
                temp=temp->next;
                r=r->next;
            }
            else if(temp->val>temp1->val){
                ListNode* y=new ListNode(temp1->val);
                r->next=y;
                temp1=temp1->next;
                r=r->next;
            }
            else{
                ListNode* z=new ListNode(temp->val);
                ListNode* w=new ListNode(temp1->val);
                r->next=z;
                temp=temp->next;
                r=r->next;
                r->next=w;
                temp1=temp1->next;
                r=r->next;
            }
        }
        while(temp!=NULL){
            ListNode* x=new ListNode(temp->val);
            r->next=x;
            r=r->next;
            temp=temp->next;
        }
        while(temp1!=NULL){
            ListNode* x=new ListNode(temp1->val);
            r->next=x;
            r=r->next;
            temp1=temp1->next;
        }
        return result->next;
    }
};
