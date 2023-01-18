SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
  int i=1;
  SinglyLinkedListNode* t = llist;
  if(t==nullptr)
  {
    return nullptr;
  }
  if(position==0)
  {
    SinglyLinkedListNode* p = t->next;
    delete(t);
    return p;
  }
  if(position==1)
  {
    SinglyLinkedListNode* p = t->next;
    t->next=p->next;
    delete(p);
    return t;
  }
  while(t!=nullptr && i!=position)
  {
   i++;
   t=t->next;
  }
  if(t==nullptr)
   return llist;
  SinglyLinkedListNode* p = t->next;
  t->next=p->next;
  delete(p);
  return llist;
}
