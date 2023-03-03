#include<iostream>
using namespace std ;
class node{
    public:
    int val; 
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

 void deleteatfront(node* &n1){
    node*todelete = n1 ;
    n1 = n1->next ;
    delete todelete ;
}

 void deleteanykey(node* &n1 , int keytodel){
     node*temp = n1 ;
     while(temp->next->val!=keytodel){
         temp = temp->next ;
     }
     node*todelete = temp ->next ;
     temp->next = temp->next->next ;
     delete todelete ; 
 }

int main(){
node*n1 = new node(50) ;
node*n2 = new node(60) ;
node*n3 = new node(70) ;
node*n4 = new node(80) ;
n1->next = n2 ; 
n2->next = n3 ;
n3->next = n4 ;
n4->next = NULL ;
deleteanykey( n1,60) ;
printlist(n1) ;
cout<<"hi! siddhartha veram "<<endl ;
deleteatfront(n1) ; 
printlist(n1) ;
return 0 ;
}