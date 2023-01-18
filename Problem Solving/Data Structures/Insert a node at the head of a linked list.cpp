SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
  
  SinglyLinkedListNode* nn = new SinglyLinkedListNode(data);
  SinglyLinkedListNode* t = llist;
  if(t==nullptr)
  {
    return nn;
  }
  else {
    nn->next=llist;
    return nn;
  }
}
