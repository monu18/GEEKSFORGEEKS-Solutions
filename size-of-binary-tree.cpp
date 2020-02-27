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
    //ss
}
int getSize(Node* node)
{
   // Your code here
   inorder(node,v);
   int siz=v.size();
   v.clear();
   return siz;
}
// second method
/*
int getSize(Node* node)
{
   // Your code here
   if(node==NULL)
   {
       return 0;

   }
   return 1+getSize(node->left)+getSize(node->right);

}
*/
