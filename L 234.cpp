/* 2nd half ll ko reverse and compare, so constant space
*/
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* p=head;
        ListNode* q=head;
        while(q && q->next){
            p=p->next;
            q=q->next->next;
        }
        ListNode* mid=p;
        ListNode* temp=NULL;
        ListNode* prev=NULL;
        while(mid){
            temp=mid->next;
            mid->next=prev;
            prev=mid;
            mid=temp;
        }


        ListNode* c=head;

        while(prev && c){
            if(prev->val!=c->val) return false;
            prev=prev->next;
            c=c->next;
        }
        return true;
    }
};
