#include<iostream>
using namespace std ;
class node{
    public:
    int val ;
    node*next ; 
    node(int x){
        this->val = x ;
    }
};
 void printlist(node*n){
     while(n!=NULL){
     cout<<n->val<<endl ; 
     n = n->next ;
     }
 }

void insertathead(node**n1,int newval ){
        node*no = new node(newval) ;
        no->next = *n1 ;
        *n1 = no ;

}
void insertatlast(node**n1 , int newval){
    node* no = new node(newval) ;
    no->next = NULL ;
    if(*n1==NULL){
        *n1 = no ;
        return ;
    }
    node*last = *n1 ;
    while(last->next!=NULL){
        last = last->next ;
    }
    last->next = no ;
}
int main(){

node*n1 = new node(10) ;
node*n2 = new node(50) ;
node*n3 = new node(100) ;
n1->next  = n2 ;
n2->next = n3 ;
n3->next=NULL ;
printlist(n1) ;
cout<<"list , after inserting new nodes" <<endl ;
insertathead(&n1,500) ;
insertathead(&n1,500) ;
insertathead(&n1,500) ;
insertathead(&n1,500) ;
insertatlast(&n1,1000) ;
printlist(n1) ;


return 0 ;
}