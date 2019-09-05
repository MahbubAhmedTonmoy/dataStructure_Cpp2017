#include <bits/stdc++.h>
using namespace std;

class Tree
{
public:
    int val ;
    Tree *left , *right ;
    Tree()
    {
        left = right = NULL ;
    }
};

Tree *root = NULL ;

void Create(Tree *prev,Tree *now,int val,int lr)
{
    if(root==NULL)
    {
        root = new Tree();
        root->val = val ;
        return ;
    }
    if(now==NULL)
    {
         now = new Tree();
         now->val = val ;
         if(lr==0) prev->left = now ;
         else prev->right = now ;
         return ;
    }
    if(now->val>val)
        Create(now,now->left,val,0);
    else
        Create(now,now->right,val,1);
}

int getHeight(Tree *root) {
   if (root == NULL)
         return -1;

      // find the height of each subtree
      int lh = getHeight(root->left);
      int rh = getHeight(root->right);

      return 1 + max(lh,rh);
}
int main()
{

    int n ;
    cin >> n ;

    for(int i=1;i<=n;i++)
    {
        int val ;
        cin >> val ;
        Create(NULL,root,val,-1);
    }
    cout<<"\nHeight of the tree is "<<getHeight(root);
   cout<<endl;
}
/// 200 100 300 50 150 250 400 350 450
