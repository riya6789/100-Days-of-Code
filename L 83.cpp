class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)return 0;
        ListNode* p=head;
        
        while(p){
            if(p->next!=NULL && p->val==p->next->val){
                ListNode* temp=p->next;
                p->next=p->next->next;
                delete temp;
            }
            else p=p->next;
        }
        return head;
        }
    
};
