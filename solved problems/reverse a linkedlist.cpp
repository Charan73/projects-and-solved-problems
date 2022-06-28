class Solution {
public:
ListNode* recur(ListNode*head){
if(head->next==NULL){
return head;
}
ListNode*reverserecur=recur(head->next);
head->next->next=head;
head->next=NULL;
return reverserecur;
}

    ListNode* reverseList(ListNode* head) {
      if(head==NULL)return NULL;
      return recur(head);
    }
};
