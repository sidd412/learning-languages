#include<iostream>
#include<stack>
using namespace std ;

// void printstack(stack<int>s){
//     while(!s.empty()){
//     cout<<s.top()<<endl ;
//       s.pop() ;
//     }
// }

int main(){
stack<int>s ;
s.push(10) ;
s.push(20) ;
 s.push(30) ;
 s.push(40) ;
 s.push(50) ;
//  printstack(s) ;
int x = s.size() ;
 for(int i = 0 ;i<x ; i++){
        cout<<s.top() <<endl;   
        s.pop() ;
        
         }

return 0 ;
}