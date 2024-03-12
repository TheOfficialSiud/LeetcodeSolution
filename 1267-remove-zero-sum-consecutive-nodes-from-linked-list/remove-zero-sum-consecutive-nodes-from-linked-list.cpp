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
    ListNode* removeZeroSumSublists(ListNode* head) {
        vector<int> vec;
        ListNode *temp=head;
        while(temp){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        // int n=vec.size();
        for(int i=0;i<vec.size();i++){
            int sum=0;
            for(int j=i;j<vec.size();j++){
                if(vec[j]==0)
                continue;
                sum+=vec[j]; 
                if(sum==0){
                    cout<<1;
                    // vec.erase(vec.begin()+i,vec.begin()+j+1);
                    for(int k=i;k<=j;k++)
                    {
                        vec[k]=0;
                    }
                    i=0;
                    break;
                }
            }
        }
        ListNode *ans=NULL;
        for(auto it:vec){
            if(it!=0){
            if(ans==NULL){
                ans=new ListNode(it);
                temp=ans;
            }
            else{
                temp->next=new ListNode(it);
                temp=temp->next;

            }
            }
        }
        return ans;
    }
};