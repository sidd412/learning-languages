#include<iostream>
using namespace std ;
class node{
    public:
    int data ; 
    node* next ;
    node(int data){
        //as 'this' pointer always points the current object i.e. "n1" hence..
        this->data=data ;
        this->next = NULL ; 
    }

};
int main(){
  node * n1 = new node(10) ;//when object is created then constructer is called automatically.
  cout<<n1->data<<endl ;
  cout<<n1->next ; 

return 0 ;
}