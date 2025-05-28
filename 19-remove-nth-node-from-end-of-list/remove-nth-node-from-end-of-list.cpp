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

        
        ListNode *prev=NULL, *curr=head;
        if(n==0)
        return head;
        

        int len=0;
        while(curr){
            len++;
            curr=curr->next;
        }

        if(n==len)
        return head->next;
        curr=head;
        n=len-n+1;




        
        
        
        while(curr){
            --n;
            if(n==0){
                prev->next=curr->next;
                return head;
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }

        return head;
    }
};