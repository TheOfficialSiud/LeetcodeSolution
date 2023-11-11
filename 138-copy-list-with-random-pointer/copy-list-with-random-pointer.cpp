class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *ans=NULL,*temp=head,*temp1;
        map<Node*, Node*> mapping;
        while(temp){
            //cout<<temp->data;
            if(ans==NULL)
            {
                ans=new Node(temp->val);
                temp1=ans;
                temp=temp->next;
            }
            else{
            temp1->next=new Node(temp->val);
            temp1=temp1->next;
            temp=temp->next;
            }
            
            
        }
        temp1=ans;
        temp=head;
        while(temp1&&temp){
            mapping[temp]=temp1;
            temp1=temp1->next;
            temp=temp->next;
        }
        
        temp1=ans;
        temp=head;
        while(temp1&&temp){
            temp1->random=mapping[temp->random];
            temp1=temp1->next;
            temp=temp->next;
        }
        
        
        return ans;
    }
};