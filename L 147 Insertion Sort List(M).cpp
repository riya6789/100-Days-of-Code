
class Solution {
public:
    ListNode* insertionSortList(ListNode* A) {
        if(!A || !A->next)return A;
    ListNode* p=new ListNode(0);
    ListNode* ans=p;
    p->next=A;
    ListNode* c=A->next;
    ListNode* prev=A;
    while(c){
        if(c->val>=prev->val){
            prev=c;
            c=c->next;
        }
        else{
            ListNode* temp=p;
            while(temp->next && temp->next->val<=c->val)temp=temp->next;
            
                ListNode* n=temp->next;
                temp->next=c;
                prev->next=c->next;
                c->next=n;
                c=prev->next;       
        }
        
    }
    return p->next;
    }
};
