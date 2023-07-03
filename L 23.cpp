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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>>p;
    for(int i=0; i<lists.size();i++){
        ListNode* temp=lists[i];
        while(temp){
            p.push(temp->val);
            temp=temp->next;
        }
    }
    ListNode* t=new ListNode(-1);
    ListNode* head=t;
    while(!p.empty()){
        t->next=new ListNode(p.top());
        p.pop();
        t=t->next;
    }
    return head->next;
    }
};
