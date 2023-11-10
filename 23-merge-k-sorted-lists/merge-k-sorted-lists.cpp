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
        
        ListNode*t1=list1,*t2=list2,*head=new ListNode(-1),*tmp=head;
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
                t1=t1->next;
                tmp=tmp->next;
            }
            else if(t1->val>=t2->val){
                tmp->next=t2;
                t2=t2->next;
               tmp= tmp->next;
            }
        }
    return head->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *head=NULL;
        
        if(lists.size()>0)
        head=lists[0];
        for(int i=1;i<lists.size();i++){
            if(lists[i]!=NULL)
            head=mergeTwoLists(head,lists[i]);
        }

        return head;
    }
};