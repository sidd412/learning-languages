#include<iostream>
using namespace std ;
int main(){
// int a  = 50 ; 
// int *p ; 
// p  = &a ; 
// cout<<p<<endl ; 
// cout<<*p<<endl ;
// p++ ; 
// cout<<p<<endl ;
// cout<< &a<<endl   ; 
// cout<<*p<<endl  ;  
int sid[5] = {1,2,3,8,9} ; 
// cout<<sid<<endl ; 
// cout<<*sid<<endl ; 
// cout<<sid[0]  ;
for (int  i = 0; i < 5 ; i++)
{
    /* code */
    cout<<*(sid +i )<<endl ;

}
cout<<sid<<endl ; 
cout<<(sid +1 )<<endl ; 
cout<<(sid+2)<<endl  ; 
cout<<(sid+3)<<endl  ;
cout<<(sid+4)<<endl  ;
cout<<*sid<<endl ; 
cout<<*(sid+1) <<endl  ; 
cout<<*(sid+2)<<endl ; 



return 0 ;
}