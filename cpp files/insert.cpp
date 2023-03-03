#include<iostream>
using namespace std ;
class node{
    public:
    int val ;
    node*next ;

};
 void print(node*n){
     while(n!=0){
     cout<<n->val<<endl ;
     n = n->next ;
     }
 }
 void insertathead(node**n1,int newval){
     node*newnode = new node() ;
     newnode->val = newval ;
     newnode->next = *n1 ;
     *n1 = newnode ;
 }

int main(){
node*n1 = new node() ;
node*n2 = new node() ;
node*n3 = new node() ;
node*n4 = new node() ;
n1->val = 5 ;
n1->next = n2 ;
n2->val = 10 ;
n2->next = n3;
n3->val = 15 ;
n3->next = n4 ;
n4->val = 20 ;
n4->next = NULL;
print(n1) ;
cout<<"list aftre insertion at head" <<endl;
insertathead(&n1 , 25) ;
print(n1) ;
return 0 ;
}