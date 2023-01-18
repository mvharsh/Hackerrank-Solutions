    void postOrder(Node *root) {
       if(root==nullptr)
          return;
       postOrder(root->left);
       postOrder(root->right);
       cout<<root->data<<" ";
    }
