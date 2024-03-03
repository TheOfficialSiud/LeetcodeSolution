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




        ListNode *temp=head,*prev;

        int c=1,len=1;
         while(temp->next!=NULL){
            
            
            len++;
            prev=temp;
            temp=temp->next;
        }

        if(len==n)
        {
            return head->next;
        }

        n=len-n+1;
         temp=head;

        while(temp){
            c++;
            if(c==n)
            break;
            else
            temp=temp->next;
        }
        
        temp->next=temp->next->next;

        return head;
    }
};