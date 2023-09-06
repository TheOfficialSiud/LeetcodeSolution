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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int c=0;
        vector<ListNode*> ans;
        ListNode *temp=head;
        while(temp){
            c++;
            temp=temp->next;
        }
        int rem=0;
        if(c<k){
            c=1;
            rem=0;
        }
        else if(c%k==0)
        c=c/k;
        else if(c%k!=0){
                 rem=c%k;
                 c=c/k;
        }
        
       
         
          temp=head;
        while(k){
            ListNode *push_list=NULL,*point;
            // point=push_list;
            int m=c;
            if(rem!=0){
                m++;
                rem--;
            }
            while(m){
                if(push_list==NULL){
                    if(temp){
                   
                    push_list=new ListNode();
                    push_list->val=temp->val;
                    // else{
                    //     int a;
                    //     push_list->val=a;
                    // }
                    push_list->next=NULL;
                    point=push_list;
                }
                }
                else{
                     if(temp){
                        point->next=new ListNode();
                        point=point->next;
                        point->val=temp->val;
                    //     else{
                    //     int a;
                    //     push_list->val=a;
                    // }
                        point->next=NULL;
                     }
                }
                if(temp)
                temp=temp->next;
                --m;
            }
            ans.push_back(push_list);
            --k;
        }
        return ans;
    }
};