#include<iostream>
using namespace std ;
class node{
    public:
    int data ;
    node*left ;
    node*right ;
    node(int x){
        this->data = x ;
        this->left = NULL ;
        this->right = NULL ;
    }
};
node* buildtree(node*root){
    cout<<"enter the value : " <<endl ;
    int val ;
    cin>>val ;
     root = new node(val) ;
     if(val == -1){
         return NULL ;
     }
     cout<<"enter the value of left child : "<<endl ;
     root->left = buildtree(root->left) ;
     cout<<"enter the value of right child :"<<endl ;
     root->right = buildtree(root->right) ;
     return root ;
}

 void preorder(node*root){
     if(root==NULL)
     return ;
     cout<<root->data<<" " ;
     preorder(root->left) ;
     preorder(root->right) ;
 }
int main(){
node*root = NULL;
root = buildtree(root) ;
preorder(root) ;

return 0 ;
}