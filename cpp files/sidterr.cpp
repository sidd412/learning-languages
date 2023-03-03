#include<iostream>
using namespace std ;
class node{
    public:
    int data ; 
    node*left ;
    node*right ; 
    node(int x ){
        this->data = x ;
        this->left = NULL ;
        this->right = NULL ;

     }
    };

int search(int in[]  , int start , int end , int curr){
    for(int i = start; i<=end ; i++){
        if(in[i]==curr){
            return i ;
        }
    } 
    return -1 ;
}
  
node*buildtree(int po[] , int in[] , int start ,int end){
    static int idx = 4;
    if(start>end){
        return NULL;
            }
    int curr = po[idx];
    idx--;
    node*no = new node(curr) ;
    if(start==end){
        return no ;
    }
    int pos =search(in , start ,end , curr) ;
    no->right = buildtree(po,in,pos+1 , end);
    no->left = buildtree(po,in,start ,pos-1) ;
    return no ;


}

void inorder(node*root){
    if(root==NULL){
        return ;
    }
    inorder(root->left) ;
    cout<<root->data<<" ";
    inorder(root->right) ;

}
void pretorder(node*root){
    if(root==NULL){
        return ;

    }
    cout<<root->data<<" " ;
    pretorder(root->left) ;
    pretorder(root->right) ;
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
int po[] = {4,2,5,3,1} ;
int in[]=   {4,2,1,5,3} ;
node*n = buildtree(po ,in , 0 , 4) ;
inorder(n) ;
cout<<endl ;
pretorder(n) ;
cout<<endl ;
postorder(n) ; 

return 0 ;
}