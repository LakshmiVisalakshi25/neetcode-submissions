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
        int x=0;
        ListNode* temp=head;
        while(temp!=NULL){
            x++;
            temp=temp->next;
        }
        temp=head;
        int v=x-n;
        if(v==0){
            head=head->next;
            return head;
        }
        int cnt=0;
        ListNode* prev=NULL;
        while(temp!=NULL){
            if(cnt==v){
                prev->next=temp->next;
                delete temp;
                // temp=temp->next;
                // cnt++;
                break;
            }
            else{
                prev=temp;
                temp=temp->next;
                cnt++;
            }
        }
        return head;
    }
};
