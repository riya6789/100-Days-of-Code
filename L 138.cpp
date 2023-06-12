class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp=head;
        while(temp){
            Node* nn=new Node(temp->val);
            nn->next=temp->next;
            temp->next=nn;
            temp=temp->next->next;
        }
        temp=head;
        while(temp){
            if(temp->random!=NULL){
                temp->next->random=temp->random->next;
            }
            temp=temp->next->next;
        }
        Node* d=new Node(0);
        Node* itr=d;
        Node* f;
        temp=head;
        while(temp){
            f=temp->next->next;
            itr->next=temp->next;
            itr=itr->next;
            temp->next=f;
            temp=f;
        }
        return d->next;
    }
};
