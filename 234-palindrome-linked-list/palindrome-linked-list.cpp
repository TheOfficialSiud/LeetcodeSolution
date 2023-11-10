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

//  int init = [] {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);  
//     ofstream out("user.out"); 
//     for (string s; getline(cin, s);) 
//         out << (equal(s.begin()+1, s.begin()+s.size()/2, s.rbegin()+1) ? "true\n" : "false\n");  
//     out.flush(); 
//     exit(0);  
//     return 0;
// }();
class Solution {
public:
    ListNode* reversing(ListNode * curr){
        if(curr==NULL||curr->next==NULL)
        return curr;
            ListNode *prev=NULL,*next=NULL;
            while(curr){
                next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
            }
           
           return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL)
        return 0;
        if(head->next==NULL)
        return 1;
        
        ListNode *slow=head,*fast=head,*temp=head;
        int cnt=0;
        // while(temp)
        // {
        //     cnt++;
        //     temp=temp->next;
        // }
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
       
        // if(cnt%2!=0)
        // slow=slow->next;
        temp=head;
        slow =reversing(slow);

        cout<<slow->val<<cnt;
         
        while(slow&&temp){
            if(slow->val!=temp->val)
            return false;
            slow=slow->next;
            temp=temp->next;
        }

        return true;
    }
};