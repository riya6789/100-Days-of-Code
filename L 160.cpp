class Solution {
public:
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
        if(h1==NULL && h2==NULL)return NULL;
        ListNode* a=h1;
        ListNode* b=h2;
        while(a!=b){
            a = a==NULL? h2 : a->next;
            b = b==NULL? h1 : b->next;
        }
        return a;
    }
};

//simpler
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* p=headA;
        ListNode* q=headB;
        int n=0;
        int m=0;
        while(p){
            p=p->next;
            n++;
        }
        while(q){
            q=q->next;
            m++;
        }
        
        if(m>n){
            while(m>n){
                headB=headB->next;
                m--;
            }
        }
        else if(m<n){
            while(m<n){headA=headA->next; n--;}
        }
        while(headA && headB){
            if(headA==headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};
