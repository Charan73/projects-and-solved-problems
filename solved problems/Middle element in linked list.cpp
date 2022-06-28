#include <bits/stdc++.h> 




       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };



Node *findMiddle(Node *head) {
   int n=0;
    Node *fast=head,*slow=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
        }
    return slow;
}
