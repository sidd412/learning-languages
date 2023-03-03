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

int search(int in[] , int start , int end  ,int curr){
    for(int i = start ; i<=end ;i++){
        if(in[i]==curr){
            return i ;
        }
    }
    return -1 ;
}


node*buildtree(int p[] , int in[] , int start ,int end){
    static int idx = 0 ;
    if(start>end){
        return NULL ;
    }
    int curr = p[idx] ;
    idx++ ;
    node*no = new node(curr) ;
    if(start == end){
        return no ;
    }
    int pos = search(in , start , end , curr) ;
    no->left = buildtree(p , in , start , pos-1) ;
    no->right = buildtree(p , in , pos+1 , end) ;
    return no ;
}

void preorder(node*root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<<" " ;
    preorder(root->left) ;
    preorder(root->right) ;
    
}
void inorder(node*root){
    if(root == NULL){
        return  ;
    }
    inorder(root->left) ;
    cout<<root->data<<" " ;
    inorder(root->right) ;
}

int main(){
int p[] = {1,2,4,3,5} ;
int in[] ={4,2,1,5,3} ;
node*root = buildtree(p , in , 0 ,4 ) ;
preorder(root) ;
cout<<endl ;
inorder(root) ;
return 0 ;
}