class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int count=1;
        ListNode* p=head;
        while(p && p->next){
            p=p->next;
            count++;
        }
        k=k%count;
        if(k==0)return head;
        p->next=head;
        int rem=count-k;
        while(rem){
            p=head;
            head=head->next;
            rem--;
        }
        p->next=NULL;
        return head;
    }
};
