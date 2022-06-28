int getDecimalValue(struct ListNode* head){
    
    int ans=0;
   struct  ListNode*temp=head;
    
    while(temp!=NULL){
        ans*=2;
        ans+=(temp->val);
        temp=temp->next;
    }
    return ans;

}
