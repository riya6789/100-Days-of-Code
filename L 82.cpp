class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ans= new ListNode(0);
        ListNode* c=head;
        ListNode* p=ans;
        if(head==NULL || head->next==NULL) return head;
        if(head->val==head->next->val && head->next->next==NULL) return NULL;
        if(head->val!=head->next->val) p->next=head;
      
        while(c){
            if(c->next && c->val==c->next->val){
                while(c->next && c->val==c->next->val) c=c->next;
                p->next=c->next;
                c=p->next;
            }
            else{
                p=c;
                c=c->next;
            }
        }
        return ans->next;
    }
};
