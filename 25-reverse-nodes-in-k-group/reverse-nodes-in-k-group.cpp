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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)
        return NULL;

        //1.reverse k nodes
        ListNode *curr=head,*prev=NULL,*next=NULL;
        int cnt=0;
        ListNode *temp=head;
        while(temp)
        {
            temp=temp->next;
            cnt++;
            if(cnt==k)
            break;
        }
        if(cnt<k)
        {
            return head;
        }
        cnt=0;
        while(curr!=NULL&&cnt<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            cnt++;
        }
    

        //2. connect the remaining nodes with reversed list
        if(next!=NULL)
        head->next=reverseKGroup(next,k);
    
    
        // return the head of reversed list
        return prev;
    }
};