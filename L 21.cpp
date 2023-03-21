/* BRUTE */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* l1=list1;
        ListNode* l2=list2;
        ListNode* ans=new ListNode(-1);
        ListNode* p=ans;
        while(l1 && l2){
            if(l1->val <= l2->val ){
                p->next=l1;
                l1=l1->next;
            }
            else{
                p->next=l2;
                l2=l2->next;
            } 
            p=p->next;
            
        }
        while(l1){
            p->next=l1;
                p=p->next;
                l1=l1->next;
        }
        while(l2){
            p->next=l2;
                p=p->next;
                l2=l2->next;
        }
        return ans->next;
    }
};

/* RECURSION */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;

        if(l1->val <= l2->val){
            l1->next=mergeTwoLists(l1->next,l2);
            return l1;
        }
        else{
            l2->next=mergeTwoLists(l1,l2->next);
            return l2;
        }
    }
};
