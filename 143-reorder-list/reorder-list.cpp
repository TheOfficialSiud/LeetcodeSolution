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
    ListNode* reverse(ListNode* head){
        ListNode *prev=NULL,*curr=head,*next=curr->next;
        while(next){
            curr->next=prev;
            prev=curr;
            curr=next;
            next=next->next;
        }
        curr->next=prev;
        return curr;

    }

    void reorderList(ListNode* head) {
        int n=0;
        ListNode *temp=head;

        while(temp){
            n++;
            temp=temp->next;
        }
        if(n==1||n==0)
        return ;
        
        temp=head;
        int c=1;

        while(c<n/2){
            temp=temp->next;
            c++;
        }
        
        ListNode *rest=temp->next;
        temp->next=NULL;
        temp=head;

        rest=reverse(rest);

       ListNode *temp1=head;

       while(temp){
           ListNode *t=temp->next,*r=rest->next;
           temp->next=rest;
           if(t!=NULL)
           {
            rest->next=t;
            rest=r;
           }
           temp=t;
       }
    //    temp=rest;
    //    cout<<rest->val;
       


    }
};