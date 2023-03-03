#include<iostream>
using namespace std ;
int main()
{
    int a,b ;
    char opr;
cout<<"eneter two numbers a and b" ;
cin>>a>>b ;
cout<<"enter the opertaor" ;
cin>>opr ;
switch (opr)
{
case '+':
cout<<a+b<<endl ;
    break;
    case '-':
cout<<a-b<<endl ;
    break;
    
case '*':
cout<<a*b<<endl ;
    break;

     case '/':
cout<<a/b<<endl ;
    break;

default:
cout<<"entered operater is not valid" ;
    break;
}
    return 0 ;
}