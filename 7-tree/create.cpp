#include<bits/stdc++.h>
using namespace std;

class Tree
{
public:
    int val;
    Tree *left,*right;
    Tree()
    {
        left = right = NULL ;
    }
};
Tree *root = NULL;

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
void preorder(Tree *node)
{
    if(node==NULL) return ;
    cout << node->val << ' ' ;
    preorder(node->left);
    preorder(node->right);
}
void postorder(Tree *node)
{
    if(node==NULL) return ;
    preorder(node->left);
    preorder(node->right);
    cout << node->val << ' ' ;
}
void inorder(Tree *node)
{
    if(node==NULL) return ;
    inorder(node->left);
    cout << node->val << ' ' ;
    inorder(node->right);
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int val;
        cin >> val;
        Create(NULL,root,val,-1);
    }
    cout << "in order : ";
    inorder(root);
    cout << endl;
    cout << "preorder : ";
    preorder(root);
    cout << endl;
    cout << "postorder : ";
    postorder(root);
    cout << endl;
}
/// 200 100 300 50 150 250 400 350 450
