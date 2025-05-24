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

    // ListNode* Reverselist(ListNode* head){
    //     ListNode *prev=NULL, *curr=head,*nex;

    //     while(curr){
    //         nex=curr->next;
    //         curr->next=prev;
    //         prev=curr;
    //         curr=nex;
            
    //     }
     
        
    //     return prev;

    // }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        // l1= Reverselist(l1);
        // l2= Reverselist(l2);

        ListNode *res=new ListNode(),*temp=res;
       
        temp=res;

        ListNode *t1=l1,*t2=l2;
        int carry=0;



        while(t1&&t2){
            // cout<<1;
            
            if((t1->val+t2->val+carry)>9){

                
                temp->next=new ListNode((t1->val+t2->val+carry)%10);
                carry=1;
                temp=temp->next;


            }
            else{
                temp->next=new ListNode(t1->val+t2->val+carry);
                carry=0;
                temp=temp->next;
            }

            t1=t1->next;
            t2=t2->next;
        }





        while(t1){
            if((t1->val+carry)>9){

                
                temp->next=new ListNode((t1->val+carry)%10);
                carry=1;
                temp=temp->next;


            }
             else{
                temp->next=new ListNode(t1->val+carry);
                carry=0;
                temp=temp->next;
            }
            t1=t1->next;
        }

             while(t2){
            if((t2->val+carry)>9){

                
                temp->next=new ListNode((t2->val+carry)%10);
                carry=1;
                temp=temp->next;


            }
             else{
                temp->next=new ListNode(t2->val+carry);
                carry=0;
                temp=temp->next;
            }
            t2=t2->next;
        }


        if(carry){
            temp->next=new ListNode(carry);
                carry=0;
                temp=temp->next;

        }
        // cout<<2;
        return res->next;
        
    }
};