/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* A) {
        if(A==NULL || A->next==NULL)return A;
        ListNode* p=new ListNode(0);
        ListNode* ans=p;
        
    ListNode* c=A;
    while(c && c->next){
        p->next=c->next;
        p=p->next;
        c->next=p->next;
        p->next=c;
        p=c;
        c=c->next;
    }
    return ans->next;
    }
};
