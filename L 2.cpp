/* For constant space, store the sum values in 1st LL only, and also start a "prev" pointer which stays one step back from the traversing node, and it is used for the situation where LL1 length is smaller so we take the prev pointer to the LL2 node.
*/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=l1;
        ListNode* prev=NULL;
        int c=0;
        int sum=0;

        while(l1 && l2){
             sum=l1->val + l2->val + c;
             l1->val=sum%10;
             c=sum/10;
             prev=l1;
            l1=l1->next;
            l2=l2->next;
        }     
        while(l1){
            sum=l1->val + c;
            l1->val=sum%10;
             c=sum/10;
             prev=l1;
            l1=l1->next;
        }

        while(l2){
            sum=l2->val + c;
            l2->val=sum%10;
             c=sum/10;
             prev->next=l2;
             prev=l2;
            l2=l2->next;
        }
        if(c>0){
            ListNode* t=new ListNode(0);
            t->val=c;
            prev->next=t;
        }
        return head;
    }
};
