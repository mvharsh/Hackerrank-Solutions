    void inOrder(Node *root) {
      if(root==nullptr)
          return;
       inOrder(root->left);
       cout<<root->data<<" ";
       inOrder(root->right);
    }
