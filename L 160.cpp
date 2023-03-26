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
