  int hgt(Node* root)
  {
    if(root==nullptr)
        return 0;
    int L=hgt(root->left);
    int R=hgt(root->right);
    return max(L,R)+1;
    if(L>R)
        return L+1;
    else {
        return R+1;
        }
  }
  
  int height(Node* root) {
    int ht = hgt(root); 
    return ht-1;
  }
