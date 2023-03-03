
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
   void insertatfront(node**head , int newval ){
      node*no = new node(newval)  ;
      no ->next = *head ;
       *head = no ;
}
        void insertatlast(node**head , int newval){
                  node*no = new node(newval) ;
                  no->next = NULL ;
                  if(*head ==NULL){
                      *head = no ; 
                      return ;
                  }
                node*last = *head ;
                while(last->next !=NULL){
                    last = last->next ;
                }
                last->next = no ;
 
}
        void printlist(node*n){
           while(n!= NULL){
            cout<<n->val<<endl ;
             n =n->next ; 
        }
 }
int main(){   
node* head = new node(5) ;
head->next = NULL ;
printlist(head) ;
cout<<"list after insertion " <<endl;
insertatfront(&head , 50) ;
insertatlast(&head , 500) ;
printlist(head) ;
return 0 ;
}