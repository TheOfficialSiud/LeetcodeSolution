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
    void reversing(  ListNode* curr, ListNode * prev, ListNode * &head){
        if(curr==NULL)
        {
            head=prev;
            return ;
        }
        
     ListNode *forward=curr->next;
        curr->next=prev;
        return reversing(forward,curr,head);
           
    }
    
    ListNode* reverseList(ListNode* head) {
     ListNode *prev=NULL,*curr=head;
    reversing(curr,prev,head);
     // head=prev;
        return head;
    }
};