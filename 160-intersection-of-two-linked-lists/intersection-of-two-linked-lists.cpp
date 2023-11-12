/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tmp1=headA,*tmp2=headB;
        set<ListNode*> st;
        int n=0;
        while(tmp1){
            st.insert(tmp1);
            tmp1=tmp1->next;
        }
        while(tmp2){
            n=st.size();
            st.insert(tmp2);
            if(st.size()==n)
            return tmp2;
            tmp2=tmp2->next;
        }

        return NULL;
    }
};