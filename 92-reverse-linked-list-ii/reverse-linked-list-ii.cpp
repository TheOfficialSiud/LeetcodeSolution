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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)
        return head;
        ListNode *l,*r,*temp=head,*m,*temp2,*prev,*temp3;
        int c=0;
        while(temp){
            c++;
            if(c==left-1)
            temp3=temp;
            if(c==left){
            l=temp;
            }
            if(c==right){
                r=temp;
                break;
            }
            temp=temp->next;
        }
        // cout<<l->val<<" "<<r->val;
        temp2=r->next;
        r->next=NULL;
        m=l;
        temp=l;
        l=NULL;
        r=NULL;
        c=right-left+1;
        while(temp){
            r=temp->next;
            temp->next=l;
            l=temp;
            temp=r;
           

        }
        // cout<<temp2->val;
        m->next=temp2;
        m=l;
        if(!temp3)
        return m;
        temp3->next=m;
        return head;

    }
};