class Solution {
public:
    ListNode* removeElements(ListNode* head, int n) {
        if(head==NULL) return 0;
        ListNode* p=head;
        while(p && p->next){
            if(p->next->val==n) p->next=p->next->next;
            else p=p->next;
        }
        if(head->val==n) head=head->next;
        return head;
    }
};
