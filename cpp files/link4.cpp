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

void insertatfront(node**head , int newval){
    node*no = new node(newval) ;
    no->next = *head ;
    *head = no ;
}

void insertatend(node**head ,int newval){
    node*no = new node(newval) ;
    no->next =NULL;
    if(*head==NULL){
        *head = no ;
        return ;
    }
    node*last =  *head ;
    while(last->next!=NULL){
        last = last->next ;
    }
    last->next = no ;
}

void insertafter(node*previous ,int newval){
    if(previous==NULL){
        cout<<"previous node can't be NULL"<<endl ;
         return ;
    }
    node*no = new node(newval) ;
    no->next =previous->next ;
    previous->next = no ;
}
int main(){
node*head = new node(30) ;
  head->next = NULL ;
  insertafter(head ,40) ;
insertafter(head ,50) ;
  printlist(head);
//   cout<<"print list after insertion at front"<<endl ;
//   insertatfront(&head,20) ;
//     insertatfront(&head,10) ;
//       insertatfront(&head,0) ;
// printlist(head) ;
// cout<< "print list after insertion at end "<<endl ;
// insertatend(&head,60) ;
// insertatend(&head,70) ;
// insertatend(&head,80) ;
// insertatend(&head,90) ;
// insertatend(&head,100) ;
// printlist(head) ;
cout<<"print list after insertion after node "<<endl ;

return 0 ;
}