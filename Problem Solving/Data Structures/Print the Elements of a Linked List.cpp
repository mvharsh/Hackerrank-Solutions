void printLinkedList(SinglyLinkedListNode* head) {
  while(head!=nullptr)
  {
    cout<<head->data<<endl;
    head=head->next;
  }
}
