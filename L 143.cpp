/* Reverse the 2nd half of the LL, and make it as a seperate LL, then join the nodes as 1st of 1stLL then 1st of the reversed 2ndLL and so on  
*/
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* p=head;
        ListNode* q=head;
        while(q && q->next && q->next->next){
            p=p->next;
            q=q->next->next;
        }
        ListNode* mid=p;
        ListNode* h2=mid->next;
        mid->next=NULL;
        ListNode* prev=NULL;
        while(h2){
            ListNode* m=h2->next;
            h2->next=prev;
            prev=h2;
            h2=m;
        }
        ListNode* ans=new ListNode(-1);
        ListNode* l=ans;
        while(prev){
            l->next=head;
            l=l->next;
            head=head->next;
            l->next=prev;
            l=l->next;
            prev=prev->next;
        }
        if(head!=NULL){
            l->next=head;
            l=l->next;
            head=head->next;
        }

    }
};
