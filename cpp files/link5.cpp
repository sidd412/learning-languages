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
        cout<<n->val <<endl ;
        n = n->next ;
    }
}
void insertatfront(node**head , int newval){
    node*no = new node(newval);
    no->next = *head ;
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
    void insertafter(node*prev , int newval){
        if(prev==NULL){
            cout<<"prev can't be NULL" <<endl ;
            return ;
        }
        node*no = new node(newval);
        no->next = prev->next ;
        prev->next = no ;
    }
void deleteanykey(node**head  , int keytodel){
            node*temp  = *head ;
            while(temp->next->val!=keytodel){
                temp = temp->next ;
            }
            node* todelete = temp->next;
            temp->next = temp->next->next ;
            delete todelete  ;

}
void deleteatfront(node* &head){
    node*todelete = head ;
      head = head->next ;
    delete todelete;

}
int main(){
      node*head = new node(50) ;
      node*n2 = new  node(60) ;
      node*n3 = new node(70) ;
      node*n4 = new node(80) ;
      node*n5 = new node(90) ;
      head->next = n2 ;
      n2->next=n3 ;
      n3->next = n4 ;
      n4->next = n5 ;
      n5->next = NULL ; 
      deleteatfront(head) ;
      printlist(head) ;
      
return 0 ;
}