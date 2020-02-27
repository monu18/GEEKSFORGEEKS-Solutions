vector<int>v;
void inorder(Node* node,vector<int>&v)
{
    if(node==NULL)
    {
        return ;
    }
    inorder(node->left,v);
    v.push_back(node->data);
    inorder(node->right,v);
}
int getSize(Node* node)
{
   // Your code here
   inorder(node,v);
   int siz=v.size();
   v.clear();
   return siz;
}
