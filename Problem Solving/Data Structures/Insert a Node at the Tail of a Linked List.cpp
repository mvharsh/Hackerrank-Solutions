SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data){
  SinglyLinkedListNode* nn = new SinglyLinkedListNode(data);
  SinglyLinkedListNode* t = head;
  if(t==nullptr)
  {
    return nn;
  }
  while(t->next!=nullptr)
  {
   t=t->next;
  }
  t->next=nn;
  return head;
}
