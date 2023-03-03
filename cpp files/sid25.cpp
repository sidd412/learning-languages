#include<iostream>
using namespace std ;
int main(){
int n ;
cout<<"enter the size of array" ;
cin>>n ;
cout<<"enter the keys you wants to store in array" ;
int iert[n] ;
for (int i = 0; i <n; i++)
{
        cin>>iert[i] ;
}
int key ;
cout<<"enter the key ,you wants to search" ;
cin>>key  ;
for (int i = 0; i <=n; i++)
{
    if (key == iert[i] )
    {
            cout<<"yes ! the entered key is avaliable at index :" ;
            cout<<i ;
          break ;
    }
 
    
}


return 0 ;
}