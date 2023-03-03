#include<iostream>
using namespace std ;
int main(){
// int a = 10 ;
// cout<<&a <<endl;
// int *aptr ;
// aptr = &a ;
// cout<<aptr<<endl ;
// cout<<*aptr<<endl ;
int sid[] = {10,20,30,40,50,60} ;
cout<<*sid ;
for (int i = 0; i <=5; i++)
{
 cout<<*(sid+i)<<endl ;
}


return 0 ;
}