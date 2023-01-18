    void preOrder(Node *root) {
       if(root==nullptr)
          return;
       cout<<root->data<<" ";
       preOrder(root->left);
       preOrder(root->right);
    }
