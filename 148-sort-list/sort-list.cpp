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

    ListNode* middlepart(ListNode *head){
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode *slow=head,*fast=head->next;
        while(fast!=NULL &&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    ListNode* merge(ListNode *list1 ,ListNode *list2){
        ListNode * t1=list1,*t2=list2,*ret=new ListNode(-1),*tmp=ret;

      while(t1!=NULL||t2!=NULL){
            if(t1==NULL){
                tmp->next=t2;
                break;
            }
            else if(t2==NULL){
                tmp->next=t1;
                break;
            }
            else if(t1->val<t2->val){
                tmp->next=t1;
                tmp=t1;
                t1=t1->next;
                
            }
            else if(t1->val>=t2->val){
                tmp->next=t2;
                tmp= t2;
                t2=t2->next;
               
            }
        }
        return ret->next;
    }
    ListNode* sortList(ListNode* head) {
        //base case
        if(head==NULL||head->next==NULL)
        return head;

        // find middle pointer
        ListNode* mid=middlepart(head);
        ListNode *left=head;
        ListNode *right=mid->next;
        mid->next=NULL;

        //sort the divided list
        left=sortList(left);
        right=sortList(right);

        //merge the list
        ListNode *ans;
        ans=merge(left,right);

        //return 
        return ans;

    }
};