#include<iostream>
using namespace std ;
int main(){
    int n,j ;
    cin<<n ;

for (int i = 1; i <=n; i++)
{
    int k ;
for (int j =1; j <= n-i; j++)
{
cout<<" ";
}
for ( ; j <= n; j++)
{
    k= i ;
cout<<k<<" " ;
k-- ;

}
for (  ; j <=(n+i-1); j++)
{
k=2 ;
cout<<k ;
k++ ;
}
cout<<endl ;
}
return 0;
}