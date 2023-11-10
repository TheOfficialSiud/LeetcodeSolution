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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode *t1=l1,*t2=l2;
        ListNode *ans=new ListNode(-1);
        ListNode *temp=ans;
        while(t1||t2){
            if(t1==NULL){
                int t=t2->val+carry;
                t2->val=t%10;
                carry=t/10;
                temp->next=t2;
                t2=t2->next;
                temp=temp->next;
                
            }
            else if(t2==NULL){
                int t=t1->val+carry;
                t1->val=t%10;
                carry=t/10;
                temp->next=t1;
                t1=t1->next;
                temp=temp->next;
            }
            else{
                int t=t1->val+t2->val+carry;
                t1->val=(t)%10;
                carry=(t)/10;
                cout<<t1->val<<" "<<carry<<endl;
                temp->next=t1;
                temp=temp->next;
                t1=t1->next;
                t2=t2->next;
            }
        }
        if(carry==1)
        temp->next=new ListNode(1);
        return ans->next;
    }
};