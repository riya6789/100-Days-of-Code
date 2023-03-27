class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* c=head;
        ListNode* p=NULL;
        ListNode* temp=NULL;
        while(c){
            temp=c->next;
            c->next=p;
            p=c;
            c=temp;
        }
        return p;
    }
};
