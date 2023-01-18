SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
  int i=1;
  SinglyLinkedListNode* nn = new SinglyLinkedListNode(data);
  SinglyLinkedListNode* t = llist;
  if(t==nullptr)
  {
    return nn;
  }
  if(position==1)
  {
    nn->next=llist;
    return nn;
  }
  while(t!=nullptr && i!=position)
  {
   i++;
   t=t->next;
  }
  if(t==nullptr)
   return llist;
  nn->next=t->next;
  t->next=nn;
  return llist;
}
