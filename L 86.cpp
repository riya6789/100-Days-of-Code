class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* ans=new ListNode(-1);
        ListNode* temp=new ListNode(-1);
        ListNode* d1=ans;
        ListNode* d2=temp;
        while(head){
            if(head->val < x) {
              d1->next=head;
              d1=d1->next;           
            }
            else{
              d2->next=head;
              d2=d2->next;
            }
            head=head->next;           
        }       
        d1->next=temp->next;
        d2->next=NULL;
        return ans->next;
    }
};
