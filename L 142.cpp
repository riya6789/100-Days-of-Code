class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)return NULL;
        ListNode* s=head;
        ListNode* f=head;
        while(f && f->next){
            s=s->next;
            f=f->next->next;
            if(s==f){
                s=head;
                while(s!=f){
                    s=s->next;
                    f=f->next;
                }
                return s;
            }
        }
        return NULL;
    }
};
