class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* curr=head;
        int s=0;
        while(curr){
            s++;
            curr=curr->next;
        }
        ListNode* prev=dummy;
        ListNode* n;
        while(s>=k){
            curr=prev->next;
            n=curr->next;
            for(int i=1; i<k;i++){
                curr->next=n->next;
                n->next=prev->next;
                prev->next=n;
                n=curr->next;
            }
            prev=curr;
            s-=k;
        }
        return dummy->next;
    }};
