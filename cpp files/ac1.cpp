#include<iostream>
using namespace std ;
int main(){
int n ,index ,maximum ;
cin>>n ;
int sid[n] ;
for (int i = 0; i <=n; i++)
{
  cin>>sid[i] ;
}
cout<<"enter the index (0 to n) up to what you need maximum value" ;
cin>>index ;
for (int i = 0; i <=n; i++)
{
     maximum =INT8_MIN ; 
    if (i == index)
    {
      for (int j = 0; j <=n-i; j++)
      {
      maximum = max(sid[j],maximum) ;
      }
      
    }
 
}
cout<<maximum ;


return 0 ;
}