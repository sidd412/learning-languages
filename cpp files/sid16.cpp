#include<iostream>
using namespace std ;
int main(){
int n,j ;
cout<<"enter the value of n" ;
cin>>n ;
for (int i = 1; i <=n; i++)
{ 
  
 for (int j = 1; j <=(n-i); j++)
 {
cout<<" " ;
 }
   int k = i;
 for ( j=(n-i+1); j <=n ; j++)
 {
     
 cout<<k ;
 k-- ;
 }
 int s = 2;
 for (j=n+1 ; j <=(n+i); j++)
 {
    
     cout<<s ;
   s++ ;
 }

 
 cout<<endl ;
}

return 0 ;
}


