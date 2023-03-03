// #include<iostream>
// using namespace std ;
// class node{
//     public:
//     int val ; 
//     node *next ; 
   
// };
// void printlist(node*n){
//     while(n!=NULL){
// cout<<n->val <<endl ;
// n = n->next ;
//     }
// }
// int main(){
// node* n1 = new node() ;
// node*n2 = new node()  ;
// node *n3 = new node() ;

// n1->val = 1 ;
// n1->next = n2 ;
// n2->val = 2 ;
// n2->next = n3 ;
// n3->val = 3 ;
// n3->next = NULL ;

// printlist(n1) ;

// return 0 ;
// }

//  *****************defining linklist and print it's element **********************
#include<iostream>
using namespace std ;
class node{
    public:
    int val ;
    node*next ;

};
void print(node*n){
   while(n!=NULL){
       cout<<n->val<<endl ;
       n=n->next ;
   }
}

void insertatfront(node**n1 , int newval){
 //   prepare a new node//
    node* newnode = new node() ;
    newnode->val = newval ;
    //put it in front of current head //
    newnode->next = *n1 ;
    //move head of list to point to newnode//
    *n1 = newnode ;
}


int main(){
node*n1 = new node() ;
node*n2  =new node(); 
node*n3 = new node() ; 
node*n4 = new node() ;
n1->val = 1 ;
n1->next = n2 ;
n2->val = 2 ;


n2->next = n3 ;
n3->val = 3 ;
n3->next = n4 ;
n4->val = 4 ;
n4->next =NULL ;
print(n1) ;
cout<<"after isertio at head" <<endl;
insertatfront(&n1,8) ;
print(n1) ;

 
return 0 ;
}