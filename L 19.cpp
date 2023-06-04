class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* p=head;
        int c=0;
        while(p){
            c++;
            p=p->next;
        }
        int d=c-n;
        if(d==0) return head->next;
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(d){
            prev=curr;
            curr=curr->next;
            d--;
        }
        prev->next=curr->next;
        curr->next=NULL;
        return head;
    }
};

//Another

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL)return NULL;
        ListNode* p=head;
        ListNode* q=head;
        while(n){                          //no need to count total length then
            p=p->next;
            n--;
        }
        if(p==NULL)return head->next;
        ListNode* c=head->next;
        while(p && p->next){
            p=p->next;
            q=q->next;
            c=c->next;
        }
        q->next=c->next;
        c->next=NULL;
        return head;
    }
};
