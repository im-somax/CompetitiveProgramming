SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode* temp = head;
    if(position==0){
        head = temp->next;
        return head;
    }
    for(int i=0;i<position-1;i++){
        temp=temp->next;
    }
    SinglyLinkedListNode*  temp2 = temp->next->next;
    free(temp->next);
    temp->next = temp2;
    return head;
}