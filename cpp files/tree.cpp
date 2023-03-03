#include<iostream>
using namespace std ;

class node{
    public :
    int data ;
    node*left ;
    node*right ;
    node(int x){
     this->data = x ;
     this->left = NULL ;
     this->right= NULL;
    }
};
void preorderprinting(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" " ;
   preorderprinting(root->left) ;
   preorderprinting(root->right) ;
}
void inorder(node*root){
    if(root==NULL){
        return ;
    }
inorder(root->left) ;
cout<<root->data<<" " ;
inorder(root->right) ;

}
void postorder(node*root){
    if(root==NULL){
        return ;
    }
postorder(root->left) ;
postorder(root->right) ;
cout<<root->data<<" " ;
}
int main(){
    node*root = new node(10) ;
    root->left = new node(20) ;
    root->right = new node(30) ;
    root->left->left = new node(40) ;
    root->left->right = new node(50) ;
    root->right->left=new node(60) ;
    root->right->right = new node(70);
    preorderprinting(root) ;
    cout<<endl ;
    inorder(root) ;
    cout<<endl ;
    postorder(root) ;

return 0 ;
}