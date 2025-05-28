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

        ListNode  *res= new ListNode(0),*temp=res;

        ListNode *i=list1,*j=list2;

        while(i&&j){
            if(i->val<=j->val){
                    temp->next=new ListNode(i->val);
                    temp=temp->next;
                    i=i->next;
            }
            else{
                    temp->next=new ListNode(j->val);
                    temp=temp->next;
                    j=j->next;
            }

        }

        while(i){
                    temp->next=new ListNode(i->val);
                    temp=temp->next;
                    i=i->next;

        }
        while(j){
                    temp->next=new ListNode(j->val);
                    temp=temp->next;
                    j=j->next;

        }

        return res->next;


        
    }
};