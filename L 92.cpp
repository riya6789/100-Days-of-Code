class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* prev=dummy;
        for(int i=0; i<left-1;i++){
          prev=prev->next;
        }
        ListNode* curr=prev->next;

        for(int i=0; i<right-left; i++){
          ListNode* f=curr->next;
          curr->next=f->next;
          f->next=prev->next;
          prev->next=f;
        }
        return dummy->next;
    }
};
